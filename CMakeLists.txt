cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(android-sensor)

add_executable(android-sensor
    test.cpp
)
target_link_libraries(
            android-sensor
            android
)