cmake_minimum_required(VERSION 3.14)
project(Proyecto)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "E:/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "E:/SFML-2.5.1/lib")
set(SFML_DIR "E:/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(SFMLApp main.cpp Casillas.cpp Menu.cpp Menu.h Casillas.h Dado.cpp Dado.h Fichas.cpp Fichas.h Game.cpp Game.h Player.cpp Player.h Tablero.cpp Tablero.h)
target_link_libraries (SFMLApp sfml-graphics sfml-window sfml-system)