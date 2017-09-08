#pragma once

#include "constants.h"

namespace EPSF {

    class SimulationElement {
    public:
        SimulationElement() {}
        virtual char* getType() = 0;
    };

}