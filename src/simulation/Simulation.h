#pragma once
#include "SimulationComponent.h"
#include "constants.h"

namespace EPSF {

    class Simulation {
    public:
        Simulation();
        ~Simulation();
    private:
        SimulationComponent *m_SimulationComponents[MAX_SIMULATION_COMPONENTS];
    };

}