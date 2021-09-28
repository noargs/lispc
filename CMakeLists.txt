cmake_minimum_required(VERSION 3.20)
project(lispc C)

set(CMAKE_C_STANDARD 11)

add_executable(lispc src/main.c)

target_link_libraries(lispc edit)
