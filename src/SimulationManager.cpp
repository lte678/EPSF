//
// The SimulationManager, manages a single simulation instance and all it's global properties.
// It also works closely with the ComputationManger to preform all large scale calculations.
// It also takes care of loading and saving simulations
//

#include "SimulationManager.h"
#include "Simulation.h"

EPSF::SimulationManager::SimulationManager() {
    m_Simulation = new Simulation();
}

EPSF::SimulationManager::~SimulationManager() {

}