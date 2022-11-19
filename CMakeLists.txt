cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(progetto VERSION 1.0)
add_executable(progetto src/main.cpp src/Book.cpp src/DateControl.cpp src/Date.cpp src/controlISBN.cpp)
target_include_directories(progetto PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
