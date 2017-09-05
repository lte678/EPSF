#pragma once
#include "./simulation/Simulation.h"

namespace EPSF {

    class SimulationManager {
    public:
        SimulationManager();
        ~SimulationManager();
    private:
        Simulation *m_Simulation;
    };

}