#pragma once

#include "./simulation/Simulation.h"

#define RAPIDXML_NO_EXCEPTIONS
#include <./rapidxml/rapidxml.hpp>

#include <string.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>

namespace EPSF {

    class SimulationManager {
    public:
        SimulationManager();
        ~SimulationManager();

        void loadSimulation(std::string filename);
    private:
        const std::string SIMULATION_DIR = "./simulations/";

        Simulation *m_Simulation;
        std::thread m_SimulationThread;
        bool m_ShuttingDown;

        void stop();
        void start();
        void saveSimulationFile(std::string filename);

        void simulationLoop();
    };

}