cmake_minimum_required(VERSION 3.15)

project(KittyBuilder)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    KittyBuilder
    src/main.cpp
    src/shell.cpp
    src/commands.cpp
)
