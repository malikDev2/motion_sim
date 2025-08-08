#pragma once
#include <string>

struct RacerOption {
    std::string name;
    float speed;
    std::string texture;

    RacerOption(const std::string& n, float s, const std::string& tex)
        : name(n), speed(s), texture(tex) {}
};