cmake_minimum_required(VERSION 3.10)
project(thread_manager)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(thread_manager
        main.cpp
        ThreadManager.cpp
        ThreadManager.h
        ThreadWrapper.cpp
        ThreadWrapper.h ThreadToken.h)
