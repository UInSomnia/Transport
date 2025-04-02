cmake_minimum_required(VERSION 3.12)

project(Transport CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")
add_executable(transport ${HEADERS} ${SOURCES})
