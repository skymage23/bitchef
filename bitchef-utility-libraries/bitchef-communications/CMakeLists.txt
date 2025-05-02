cmake_minimum_required(VERSION 3.10)

project(bitchef_communications)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(bitchef_communications STATIC src/communications.cc)

target_include_directories(bitchef_communications PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

