#include "racer_options.h"
#include "../config/settings.h"

std::vector<RacerOption> getAllRacerOptions() {
    std::vector<RacerOption> options;

    // Track Athletes
    options.emplace_back("Usain Bolt", 27.8f, "img");

    // Footballers
    options.emplace_back("Lionel Messi", 20.19f, "img");
    options.emplace_back("Cristiano Ronaldo", 20.9f, "img");
    options.emplace_back("Kylian Mbappe", 23.6f, "img");
    options.emplace_back("Neymar", 21.64f, "img");

    // Basketball Players
    options.emplace_back("Lebron James", 20.1f, "img");
    options.emplace_back("Giannis Antetokounmpo", 19.2f, "img");

    // Football Players
    options.emplace_back("Tyreek Hill", 23.24f, "img");
    options.emplace_back("Stefon Diggs", 22.50f, "img");
    options.emplace_back("JaMarr Chase", 21.74f, "img");
    options.emplace_back("Saquon Barkley", 21.93f, "img");

    // Sports Cars
    options.emplace_back("Bugatti Chiron", 304f, "img");
    options.emplace_back("Bugatti Veyron", 267f, "img");
    options.emplace_back("Ferrari Leferrari", 217f, "img");
    options.emplace_back("Lamborghini Revuelto", 218f, "img");
    options.emplace_back("Koenigsegg Jesko Absolut", 310f, "img");
    options.emplace_back("Hennessey Venom F5", 311f, "img");

    // Weapons
    options.emplace_back("Glock 17", 818.0f, "img");
    options.emplace_back("Remington 870", 1091.0f, "img");
    options.emplace_back("AR-15", 2045.0f, "img");
    options.emplace_back("AK-47", 1602.0f, "img");
    options.emplace_back("M24 Sniper", 1773.0f, "img");

    // Animals
    options.emplace_back("Cheetah", 65.0f, "img");
    options.emplace_back("Antelope", 55.0f, "img");
    options.emplace_back("Lion", 50.0f, "img");
    options.emplace_back("Greyhound", 45.0f, "img");
    options.emplace_back("Peregrine Falcon", 240.0f, "img");
    options.emplace_back("Golden Eagle", 200.0f, "img");
    options.emplace_back("Red-tailed Hawk", 120.0f, "img");
    options.emplace_back("Black Marlin", 82.0f, "img");
    options.emplace_back("Mako Shark", 60.0f, "img");
    options.emplace_back("Orca Whale", 35.0f, "img");
    options.emplace_back("Dolphin", 30.0f, "img");

    // Personal Transportation
    options.emplace_back("City Bike", 15.0f, "img");
    options.emplace_back("Skateboard", 10.0f, "img");
    options.emplace_back("Scooter", 8.0f, "img");
    options.emplace_back("Eletric Scooter", 20.0f, "img");
    options.emplace_back("Walking", 3.0f, "img");
    options.emplace_back("Jogging", 7.0f, "img");
    options.emplace_back("Running", 13.0f, "img");
    options.emplace_back("Sprinting", 17.0f, "img");



    
     





    return options;
}