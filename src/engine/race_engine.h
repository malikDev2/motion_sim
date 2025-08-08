#pragma once
#include <vector>
#include "racer.h"

class RaceEngine {
    public:
        std::vector<Racer> racers;
        float finishLineX = 800.0f;
        bool raceStarted = false;

        void update(float deltaTime);
        void reset();
}