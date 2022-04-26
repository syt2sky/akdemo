cmake_minimum_required(VERSION 3.13.1)

list(APPEND DTS_ROOT ${CMAKE_SOURCE_DIR})

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(ankoon-fc01evl)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})
target_include_directories(app PRIVATE inc)