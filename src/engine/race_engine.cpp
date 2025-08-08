#include "race_engine.h"

void RaceEngine::update(float deltaTime){
    if (!raceStarted) return;

    for (auto& r : racers) {
        if (!r.hasFinished(finishLineX)) {
            r.update(deltaTime);
        }
    }
}

void RaceEngine::reset() {
    for (auto& r : racers) {
        r.reset();
    }
    raceStarted = false;
}