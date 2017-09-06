//
// The SimulationManager, manages a single simulation instance and all it's global properties.
// It also works closely with the ComputationManger to preform all large scale calculations.
// It also takes care of loading and saving simulations
//

#include "SimulationManager.h"

EPSF::SimulationManager::SimulationManager() {
    start();
}

void EPSF::SimulationManager::start() {
    m_Simulation = new Simulation();

    m_SimulationThread = std::thread(&EPSF::SimulationManager::simulationLoop, this);
}

EPSF::SimulationManager::~SimulationManager() {
    stop();
}

void EPSF::SimulationManager::stop() {
    m_ShuttingDown = true;
    while(!m_SimulationThread.joinable()) {
      usleep(100 * 1000);
    };
    m_SimulationThread.join();
}

void EPSF::SimulationManager::simulationLoop() {
    while(!m_ShuttingDown) {
        //usleep(1);
    }
}