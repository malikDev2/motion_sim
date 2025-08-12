#include "ui.h"
#include <imgui.h>
#include <SFML/Graphics.hpp>

UI::UI(RaceEngine& eng, std::vector<RacerOption>& opts)
    : engine(eng), allOptions(opts) {}

void UI::draw() {
    ImGui::Begin("Race Setup");

    if (ImGui::BeginCombo("Select Racer", allOptions[selectedIndex].name.c_str())) {
        for(int i = 0; i < allOptions.size(); i++) {
            bool isSelected = (i == selectedIndex);
            if (ImGui::Selectable(allOptions[i].name.c_str(), isSelected)) {
                selectedIndex = i;
            }
            if (isSelected) {
                ImGui::SetItemDefaultFocus();
            }
        }
        ImGui::EndCombo();
    }

    if(ImGui::Button("Add Racer")) {
        sf::Texture* texture = new sf::Texture();
        texture->loadFromFile(allOptions[selectedIndex].texturePath);

        float y = 100.0f engine.racers.size() * 100.0f;
        engine.racers.emplace_back(
            allOptions[selectedIndex].name,
            allOptions[selectedIndex].speed,
            *texture,
            y
        );
    }

    if (ImGui::Button("Start Race")) {
        engine.raceStarted = true;
    }

    if (ImGui::Button("Reset")) {
        engine.reset();
    }

    ImGui::End();
}