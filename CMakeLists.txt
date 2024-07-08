cmake_minimum_required(VERSION 3.28)
project(QuantumLeap3D)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(QuantumLeap3D ${SOURCES})

target_include_directories(QuantumLeap3D PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
