#pragma once
#include <SMFL/Graphics.hpp>
#include <string>

class RaceEngine;

class Visualizer {
    public:
        Visualizer();

        bool loadFont(const std::string& fontPath);

        void setLaneHeight(float h);
        void setPadding(float top, float left, float right, float bottom);
        void setFinishLineColor(const sf::Color& c);
        void showLaneGuides(bool show);

        void render(sf::RenderWindow& window, const RaceEngine& engine);
    private:
        float laneHeight = 90.f;
        float padTop = 24.f;
        float padLeft = 24.f;
        float padRight = 24.f;
        float padBottom = 24.f;
        sf::Color finishC = sf::Color(255, 80, 80);
        bool showLanes = true;
 
        sf::Font font;
        bool hasFont = false;

        void drawBackground(sf::RenderWindow& window) const;
        void drawLaneGuides(sf::RenderWindow& window) const;
        void drawFinishLine(sf::RenderWindow& window) const;
        void drawRacers(sf::RenderWindow& window, const RaceEngine& engine) const;
        void drawLabel(sf::RenderWindow& window, const std::string& text, sf::Vector2f at) const;
};