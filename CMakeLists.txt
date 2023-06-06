cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(pooker LANGUAGES CXX)

add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
    src/card.cpp
    src/deck.cpp
    src/hand.cpp
    )
