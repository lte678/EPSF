//
// Test application for development of EPSF
//

#include "./src/SimulationManager.h"
#include <iostream>

EPSF::SimulationManager *simulation;

int main() {
    simulation = new EPSF::SimulationManager();

    std::cout << "Hello, World!" << std::endl;

    return 0;
}