cmake_minimum_required(VERSION 3.20)
project(AsciiArena LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(/W4) #sets stricter warnings

add_executable(hello exercises/ex0/hello.cpp)
add_executable(debug_demo exercises/ex0/debug_demo.cpp)
add_executable(ex1_q1 exercises/ex1/q1.cpp)
add_executable(ex1_q2 exercises/ex1/q2.cpp)
add_executable(ex1_q3 exercises/ex1/q3.cpp)
add_executable(ex1_q4 exercises/ex1/q4.cpp)
add_executable(ex1_q5 exercises/ex1/q5.cpp)
add_executable(ex1_q6 exercises/ex1/q6.cpp)
add_executable(ex1_q7 exercises/ex1/q7.cpp)