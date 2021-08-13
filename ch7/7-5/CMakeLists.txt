cmake_minimum_required(VERSION 3.16)
project(7_5)

set(CMAKE_CXX_STANDARD 14)

add_executable(7_5 main.cpp split.h split.cpp grammar.h grammar.cpp gen_sentence.h gen_sentence.cpp)