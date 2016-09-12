cmake_minimum_required(VERSION 3.5)
project(sfml_pacman)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH "/usr/local/Cellar/sfml/2.3_1/share/SFML/cmake/Modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 COMPONENTS system window graphics audio REQUIRED)
set(SOURCE_FILES src/main.cpp src/Game.cpp src/Game.h src/GameState.cpp src/GameState.h)
add_executable(pacman ${SOURCE_FILES})
target_link_libraries(pacman ${SFML_LIBRARIES})