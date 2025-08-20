#include <SMFL/Graphics.hpp>
#include <imgui.h>
#include <imgui-SMFL.h>

#include "data/racer_options.h"
#include "engine/race_enginer.h"
#include "render/visualizer.h"
#include "ui/ui.h"

int main() {
    // Create Window
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Race Anything");
    window.setFramerateLimit(60);

    ImGui::SMFL::Init(window);

    auto racerOptions = getAllRacerOptions();
    RaceEngine engine;
    Visualizer visualizer;
    UI ui(engine, racerOptions);

    if (!visualizer.loadFont("assets/fonts/OpenSans-Regular.ttf")) {
        std::cerr << "Warning: Could not load font for lables. \n";
    }

    sf::Clock deltaClock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SMFL::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }

        float deltaTime = deltaClock.restart().asSeconds();

        ImGui::SMFL::Update(window, sf::seconds(deltaTime));

        ui.draw();

        engine.update(deltaTime);

        window.clear();
        cisualzier.render(window, engine);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();

    return 0;

}