#pragma once
#include <vector>
#include "racer_option.h"
#include "race_engine.h"

class UI {
    public:
        UI(RaceEngine& engine, std::vector<RacerOption>& options);
        void draw();

    private:
        RaceEngine& engine;
        std::vector<RacerOption>& allOptions;
        int selectedIndex = 0;
};