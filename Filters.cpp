#include "pixel.h"
#include "image.h"
#include <iostream>

class GreyScale : public Filter<Pixel> {
public:
    void apply(const Image<Pixel>& in, Image<Pixel>& out) override {
        for (uint32_t x = 0; x < in.width(); x++) {
            for (uint32_t y = 0; y < in.width(); y++) {
                const Pixel& in_p = in[x][y];
                Pixel& out_p = out[x][y];
                float grey = (in_p.m_r + in_p.m_g + in_p.m_b) / 3.0f;
                out_p.m_r = grey;
                out_p.m_g = grey;
                out_p.m_b = grey;
            }
        }
    }
};

class Red : public Filter<Pixel> {
public:
    void apply(const Image<Pixel>& in, Image<Pixel>& out) override {
        for (uint32_t x = 0; x < in.width(); x++) {
            for (uint32_t y = 0; y < in.width(); y++) {
                const Pixel& in_p = in[x][y];
                Pixel& out_p = out[x][y];
                out_p.m_r = in_p.m_r;
                out_p.m_g = 0;
                out_p.m_b = 0;
            }
        }
    }
};

class Contrast : public Filter<Pixel> {
    float contrast;

public:
    Contrast(float contrast) : contrast(contrast) {};

    void apply(const Image<Pixel>& in, Image<Pixel>& out) override {
        for (uint32_t x = 0; x < in.width(); x++) {
            for (uint32_t y = 0; y < in.width(); y++) {
                const Pixel& in_p = in[x][y];
                Pixel& out_p = out[x][y];

                out_p.m_r = (in_p.m_r - 0.5) * contrast + 0.5;
                if (out_p.m_r > 1.0) {
                    out_p.m_r = 1.0;
                }
                else if (out_p.m_r < 0.0) {
                    out_p.m_r = 0.0;
                }
                out_p.m_g = (in_p.m_g - 0.5) * contrast + 0.5;
                if (out_p.m_g > 1.0) {
                    out_p.m_g = 1.0;
                }
                else if (out_p.m_g < 0.0) {
                    out_p.m_g = 0.0;
                }
                out_p.m_b = (in_p.m_b - 0.5) * contrast + 0.5;
                if (out_p.m_b > 1.0) {
                    out_p.m_b = 1.0;
                }
                else if (out_p.m_b < 0.0) {
                    out_p.m_b = 0.0;
                }
            }
        }
    }
};

void filters() {
    std::cout << "input file: ";
    std::string in;
    std::cin >> in;

    Image<Pixel> img;
    img.load(in);

    for (;;) {
        std::cout << "> ";
        std::string verb;
        std::cin >> verb;

        if (verb.starts_with("grey")) {
            img.add_filter(GreyScale());
        }
        else if (verb.starts_with("contrast")) {
            float contrast;
            std::cin >> contrast;
            img.add_filter(Contrast(contrast));
        }
        else if (verb.starts_with("safe")) {
            img.apply_filters();
            std::string out;
            std::cin >> out;
            img.safe(out);
        }
        else if (verb.starts_with("clear")) {
            img.clear_filters();
        }
        else if (verb.starts_with("exit")) {
            break;
        }
    }
}