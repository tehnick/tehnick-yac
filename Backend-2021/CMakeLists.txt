cmake_minimum_required(VERSION 3.5)

project(Backend-2021 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Qualification-A Qualification-A.cpp)
add_executable(Qualification-C Qualification-C.cpp)
add_executable(Qualification-E Qualification-E.cpp)

target_link_libraries(Qualification-A PRIVATE -lcurl)

