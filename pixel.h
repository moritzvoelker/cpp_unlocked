#pragma once
#include <ostream>
#include <cstdint>

struct Pixel {
	union {
		struct {
			float m_r;
			float m_g;
			float m_b;
		};
		float value[3];
	};
	Pixel(uint8_t r, uint8_t g, uint8_t b) {
		m_r = static_cast<float>(r) / 255.0;
		m_g = static_cast<float>(g) / 255.0;
		m_b = static_cast<float>(b) / 255.0;
	};

	uint8_t r() {
		return static_cast<uint8_t>(m_r * 255.0);
	}

	uint8_t g() {
		return static_cast<uint8_t>(m_g * 255.0);
	}

	uint8_t b() {
		return static_cast<uint8_t>(m_b * 255.0);
	}

	
};

std::ostream & operator<<(std::ostream &s, const Pixel &p) {
	return s << p.m_r << "r" << p.m_g << "g" << p.m_b << "b";
}