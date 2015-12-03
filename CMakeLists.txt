cmake_minimum_required(VERSION 2.8.4)


project(PROJECT_NAME)

set(PROGRAMMER usbasp)
set(MMCU atmega328p)
set(FREQ 1000000)

set(SOURCE_FILES
    main.c
)

include(gcc-avr.cmake)
