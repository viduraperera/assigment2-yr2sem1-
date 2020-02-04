cmake_minimum_required(VERSION 3.14)
project(random)

set(CMAKE_CXX_STANDARD 14)

add_executable(random main.cpp Lottery.cpp Lottery.h)