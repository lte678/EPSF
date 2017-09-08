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
      usleep(100000);
    };
    m_SimulationThread.join();
}

void EPSF::SimulationManager::simulationLoop() {
    while(!m_ShuttingDown) {
        //usleep(1);
    }
}

void EPSF::SimulationManager::loadSimulation(std::string filename) {
    FILE* loadData = fopen((SIMULATION_DIR + filename).c_str(), "r");
    if(loadData) {
        rapidxml::xml_document<> simulationData;
        fseek(loadData, 0, SEEK_END);
        size_t size = ftell(loadData);
        char *dataString = (char*)malloc(sizeof(char) * size);
        rewind(loadData);
        fread(dataString, sizeof(char), size, loadData);
        fclose(loadData);
        simulationData.parse<0>(dataString);
    } else {
        std::cout << "Failed to import simulation file!" << std::endl;
        exit(1);
    }
}

void rapidxml::parse_error_handler(const char *what, void *where) {
    std::cout << "XML parse error: " << what << std::endl;
    exit(1);
}