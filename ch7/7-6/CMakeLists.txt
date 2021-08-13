cmake_minimum_required(VERSION 3.16)
project(7_6)

set(CMAKE_CXX_STANDARD 14)

add_executable(7_6 main.cpp split.h split.cpp grammar.h grammar.cpp nrand.h nrand.cpp gen_sentence.h gen_sentence.cpp gen_aux.h gen_aux.cpp bracket.h bracket.cpp)