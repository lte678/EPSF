cmake_minimum_required(VERSION 3.6)
project(EPSF_TestApp VERSION 0.0 LANGUAGES C CXX)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

find_package(Threads REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/src/simulation)

add_executable(TestApp ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/src/SimulationManager.cpp
        ${PROJECT_SOURCE_DIR}/src/simulation/Simulation.cpp)

target_link_libraries(TestApp ${CMAKE_THREAD_LIBS_INIT})