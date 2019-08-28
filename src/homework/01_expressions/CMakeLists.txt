cmake_minimum_required (VERSION 3.8)
project(hw_01_library)

add_library(hw_01_library "expressions.cpp" "expressions.h")
add_executable(hw_01_exe "main.cpp" "expressions.cpp")




