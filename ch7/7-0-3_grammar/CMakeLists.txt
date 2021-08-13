cmake_minimum_required(VERSION 3.16)
project(7_0_3_grammar)

set(CMAKE_CXX_STANDARD 14)

add_executable(7_0_3_grammar main.cpp split.h split.cpp grammar.h grammar.cpp generate_sentence.h generate_sentence.cpp)