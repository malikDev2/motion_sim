#include "racer_options.h"

std::vector<RacerOption> getAllRacerOptions() {

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
     





    return options;
}