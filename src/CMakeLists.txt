cmake_minimum_required(VERSION 2.8)
project(src)
set(SOURCES Coder.cpp Coder74.cpp)
set(HEADERS Coder.h Coder74.h)
add_library(src STATIC ${SOURCES} ${HEADERS})
target_include_directories(src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})