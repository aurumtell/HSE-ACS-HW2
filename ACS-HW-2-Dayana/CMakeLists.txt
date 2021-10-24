cmake_minimum_required(VERSION 3.20)
project(ACS_HW_2_Dayana)

set(CMAKE_CXX_STANDARD 17)

add_executable(ACS_HW_2_Dayana
        main.cpp

        container.cpp
        container.h
        cartoon.cpp
        cartoon.h
        documentary.cpp
        documentary.h
        fiction.cpp
        fiction.h
        movie.cpp
        movie.h

        utils.h)
