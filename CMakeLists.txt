cmake_minimum_required(VERSION 2.8)

project(libfraction)

add_definitions(-Wall -g -W -Wconversion -Wshadow -Wcast-qual
    -Wwrite-strings -Wstrict-prototypes -Winline -pedantic -std=c99)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
