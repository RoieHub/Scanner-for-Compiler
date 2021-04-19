cmake_minimum_required(VERSION 3.17)
project(Ass2P)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ass2P main.cpp scanner.h symtab.h   token.h tokenstrings.h tokentype.h token.cpp symtab.cpp scanner.cpp)