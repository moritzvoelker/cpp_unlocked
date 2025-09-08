#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <errno.h>
#include <span>

template<class T>
T get_le_int(std::ifstream& stream) {
	T ret = 0;
	for (int i = 0; i < sizeof(T); i++) {
		T read = stream.get();
		ret |= read << (i * 8);
	}

	return ret;
}

template<class T>
void put_le_int(std::ofstream& stream, T value) {
	for (int i = 0; i < sizeof(T); i++) {
		char write = static_cast<char>(value);
		stream.put(write);
		value >>= 8;
	}
}

template<class P>
class Filter;

template<class P>
class Image {
	uint32_t m_width;
	uint32_t m_height;
	std::vector<P> m_pixels;
	std::vector<std::unique_ptr<Filter<P>>> m_filters;

public:
	Image() : m_width(0), m_height(0) {};

	bool load(std::string& path) {
		std::ifstream file;
		file.open(path, std::ios_base::binary);
		if (!file.is_open()) {
			char err[1024];
			strerror_s(err, 1024, errno);
			std::cout << "Error: " << err << std::endl;
			return false;
		}

		if (file.get() != 'B' || file.get() != 'M') { // checking magic bytes
			return false;
		}

		get_le_int<uint32_t>(file); // skip file size
		get_le_int<uint16_t>(file); // skip reserved 2 bytes
		get_le_int<uint16_t>(file); // skip reserved 2 bytes

		uint32_t offset = get_le_int<uint32_t>(file);

		uint32_t header_size = get_le_int<uint32_t>(file);
		if (header_size < 40) {
			return false;
		}

		m_width = get_le_int<int32_t>(file);
		m_height = get_le_int<int32_t>(file);
		m_pixels.resize(m_width * m_height, P(0, 0, 0));

		if (get_le_int<uint16_t>(file) != 1) { // check color planes == 1
			return false;
		}
		if (get_le_int<uint16_t>(file) != 24) { // we only support rgb 24 bit colors
			return false;
		}
		if (get_le_int<uint32_t>(file) != 0) { // we don't support compression
			return false;
		}

		get_le_int<uint32_t>(file); // skip pixel data size
		get_le_int<uint32_t>(file); // skip horizontal resolution
		get_le_int<uint32_t>(file); // skip vertical resolution

		if (get_le_int<uint32_t>(file) != 0) { // we only support default color palette
			return false;
		}
		if (get_le_int<uint32_t>(file) != 0) { // we don't support important colors
			return false;
		}

		file.seekg(offset);
		uint32_t padding = (4 - (m_width * 3 % 4)) % 4;
		for (uint32_t y = 1; y <= m_height; y++) {
			for (uint32_t x = 0; x < m_width; x++) {
				uint8_t b = get_le_int<uint8_t>(file);
				uint8_t g = get_le_int<uint8_t>(file);
				uint8_t r = get_le_int<uint8_t>(file);
				m_pixels[x * m_height + m_height - y] = P(r, g, b);
			}
			file.seekg(padding, std::ios_base::cur);
		}

		return true;
	}

	void safe(std::string& path) {
		std::ofstream file;
		file.open(path, std::ios_base::binary);
		if (!file.is_open()) {
			char err[1024];
			strerror_s(err, 1024, errno);
			std::cout << "Error: " << err << std::endl;
			return;
		}

		file.put('B');
		file.put('M');

		uint32_t padding = (4 - (m_width * 3 % 4)) % 4;
		uint32_t row_bytes = m_width * 3 + padding;
		uint32_t offset = 54;

		put_le_int<uint32_t>(file, offset + row_bytes * m_height); // skip file size
		put_le_int<uint16_t>(file, 0); // skip reserved 2 bytes
		put_le_int<uint16_t>(file, 0); // skip reserved 2 bytes

		put_le_int<uint32_t>(file, offset);

		put_le_int<uint32_t>(file, 40);

		put_le_int<int32_t>(file, m_width);
		put_le_int<int32_t>(file, m_height);

		put_le_int<uint16_t>(file, 1); // set color planes == 1
		put_le_int<uint16_t>(file, 24); // rgb 24 bit colors
		put_le_int<uint32_t>(file, 0); // no compression

		put_le_int<uint32_t>(file, row_bytes * m_height); // skip pixel data size
		put_le_int<uint32_t>(file, 0); // skip horizontal resolution
		put_le_int<uint32_t>(file, 0); // skip vertical resolution

		put_le_int<uint32_t>(file, 0); // default color palette
		put_le_int<uint32_t>(file, 0); // no important colors

		for (uint32_t y = 1; y <= m_height; y++) {
			for (uint32_t x = 0; x < m_width; x++) {
				P pixel = m_pixels[x * m_height + m_height - y];
				put_le_int<uint8_t>(file, pixel.b());
				put_le_int<uint8_t>(file, pixel.g());
				put_le_int<uint8_t>(file, pixel.r());
			}
			for (uint32_t i = 0; i < padding; i++) {
				file.put(0);
			}
		}
	}

	template<class F>
	void add_filter(F filter) {
		F* ptr = new F(filter);
		m_filters.push_back(std::unique_ptr<Filter<P>>(ptr));
	}

	void apply_filters() {
		Image<P> out;
		out.m_width = m_width;
		out.m_height = m_height;
		out.m_pixels.resize(m_width * m_height, P(0, 0, 0));

		for (std::unique_ptr<Filter<P>> &filter : m_filters) {
			filter->apply(*this, out);
			auto tmp = std::move(m_pixels);
			m_pixels = std::move(out.m_pixels);
			out.m_pixels = std::move(tmp);
		}
	}

	void clear_filters() {
		m_filters.clear();
	}

	uint32_t width() const {
		return m_width;
	}

	uint32_t height() const {
		return m_height;
	}

	std::vector<P>& pixels() {
		return m_pixels;
	}

	std::span<P> operator[](uint32_t index) {
		return std::span<P>(m_pixels.begin() + index * m_height, m_height);
	}
	
	const std::span<const P> operator[](uint32_t index) const {
		return std::span<const P>(m_pixels.begin() + index * m_height, m_height);
	}
};

template<class P>
class Filter {
public:
	virtual void apply(const Image<P> &in, Image<P> &out) = 0;
};