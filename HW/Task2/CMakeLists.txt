cmake_minimum_required(VERSION 3.25)
project(Task2)

set(CMAKE_CXX_STANDARD 23)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(Task2 main.cpp)

target_link_libraries(Task2 PRIVATE nlohmann_json::nlohmann_json)