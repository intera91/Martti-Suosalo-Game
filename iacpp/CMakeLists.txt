# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(MarttiSuosaloGame)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable target
add_executable(MarttiSuosalo martin.cpp)

# You can add additional settings like include directories, libraries, etc., if needed
# For example:
# include_directories(${PROJECT_SOURCE_DIR}/include)
