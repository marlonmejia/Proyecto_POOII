cmake_minimum_required(VERSION 3.13)
project(POO2)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "D:/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "D:/SFML-2.5.1/lib")
set(SFML_DIR "D:/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(POO2 main.cpp Tablero.cpp Casilla.cpp Ficha.cpp Juego.cpp Jugadores.cpp Dado.cpp Recorrido.cpp)
target_link_libraries (POO2 sfml-graphics sfml-window sfml-system)