#include "visualizer.h"
#include "../engine/race_engine.h"
#include "../engine/racer.h"
#include <algorithm>

Visualizer::Visualizer() {}

bool Visualizer::loadFont(const std::string& fontPath) {
    hasFont_ = font_.loadFromFile(fontPath);
    return hasFont_;
}

void Visualizer::setLaneHeight(float h) { laneHeight_ = std::max(20.f, h);}

void Visualizer::setPadding(float top, float left, float right, float bottom) {
    padTop_ = std::max(0.f, top);
    padLeft_ = std::max(0.f, left);
    padRight_ = std::max(0.f, right);
    padBottom_ = std::max(0.f, bottom);
}

void Visualizer::setFinishLineColor(const sf::Color& c) { finishC_ = c; }

void Visualizer::showLaneGuides(bool show) { showLanes_ = show; }

void Visualzier::render(sf::RenderWindow& window, const RaceEngine& engine) {
    drawBackground(window);

    if(showLanes_) drawLaneGuides(window);

    drawFinishLine(window, engine.finishLineX);

    drawRacers(window, engine);


}

void Visualizer::drawBackground(sf::RenderWindow& window) const {
    sf::RectangleShape bg(sf::Vector2f(
        static_cast<float>(window.getSize().x),
        static_cast<float>(window.getSize().y)
    ));
    bg.setFillColor(sf::Color(24, 28, 34));
    window.draw(bg);
}

void Visualizer::drawLaneGuides(sf::RenderWindow& window) const {
    const float h = static_cast<float>(window.getSize().y);
    const float w = static_cast<float>(window.getSize().x);

    for(float y = padTop_ + laneHeight_; y < h - padBottom_y; y += laneHeight_) {
        sf::RectangleShape guide(sf::Vector2f(w - padLeft_ - padRight_, 1.f));
        guide.setFillColor(sf::Color(70, 80, 90));
        guide.setPosition(padLeft_, y);
        window.draw(guide);
    }
}

void Visualizer::drawFinishLIne(sf::RenderWindow& window, float x) const {
    float clampedX = std::clamp(x, 0.f, static_cast<float>(window.getSize().x));
    sf::RectangleShape bar(sf::Vector2f(4.f, static_cast<float>(window.getSize().y)));
    bar.setFillColor(finishC_);
    bar.setPosition(clampedX, 0.f);
    window.draw(bar);

    const float cell = 8.f;
    const int rows = static_cast<int>(window.getSize().y / cell) + 1;
    for(int i = 0; i < rows; ++i){
        if(i % 2 == 0) {
            sf::RectangeShape sq(sf::Vector2f(8.f, 8.f));
            sq.setFillColor(sf::Color::White);
            sq.setPosition(clampedX - 8.f, i * cell);
            window.draw(sq);
        }
    }

}

void Visualizer::drawRacers(sf::RenderWindow& window, const RaceEngine& engine) const {
    sf::Text t;
    t.setFont(font_);
    t.setString(text);
    t.setCharacterSize(14);
    t.setFillColor(sf::Color::White);
    t.setOutlineColor(sf::Color(0, 0, 0, 180));
    t.setOutlineThickness(2.f);
    t.setPosition(at);
    window.draw(t);
}

