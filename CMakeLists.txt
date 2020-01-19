cmake_minimum_required(VERSION 3.16.2)
project(primitive)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
set(SRC main.cpp Primitive/Primitive.cpp Rectangle/Rectangle.cpp Circle/Circle.cpp)

add_executable(primitive ${SRC})