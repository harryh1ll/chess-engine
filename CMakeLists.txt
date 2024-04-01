cmake_minimum_required(VERSION 3.2)

project(MyProject)

# Set source files directory
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Include the directory containing the header file
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(chess 
    ${SOURCE_DIR}/constants.c
    ${SOURCE_DIR}/main.c
    ${SOURCE_DIR}/numc.c
    ${SOURCE_DIR}/king_attacks.c
    ${SOURCE_DIR}/utils.c
)