cmake_minimum_required(VERSION 3.10)
project(first_project)

set(CMAKE_CXX_STANDARD 17) # -std=c++17
#set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # commands

#find_package()

add_library(tools tools.cpp) # Creates libtools.a
add_executable(main main.cpp) # main.o
target_link_libraries(main tools) # link together main