#pragma once

namespace EPSF {

    class SimulationComponent {
    public:
        SimulationComponent() {}
        virtual char* getType() = 0;
    };

}