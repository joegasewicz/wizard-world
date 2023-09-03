cmake_minimum_required(VERSION 3.23)
project(wizard_world)

set(CMAKE_CXX_STANDARD 17)

# Move assets
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/assets DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Add SFML
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})


add_executable(wizard_world main.cpp Game.cpp Game.h State.cpp State.h)
target_link_libraries(wizard_world sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
