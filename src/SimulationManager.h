#pragma once

#include "./simulation/Simulation.h"

#include <unistd.h>
#include <thread>
#include <mutex>

namespace EPSF {

    class SimulationManager {
    public:
        SimulationManager();
        ~SimulationManager();
    private:
        Simulation *m_Simulation;
        std::thread m_SimulationThread;
        bool m_ShuttingDown;

        void stop();
        void start();
        void simulationLoop();
    };

}