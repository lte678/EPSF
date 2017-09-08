#pragma once
#include "SimulationElement.h"
#include "constants.h"

namespace EPSF {

    class Simulation {
    public:
        Simulation();
        ~Simulation();
    private:
        SimulationElement *m_SimulationElements[MAX_SIMULATION_COMPONENTS];

        void start();
        void stop();

        void update(double timeStep);
        void addElement(SimulationElement* element);
    };

}