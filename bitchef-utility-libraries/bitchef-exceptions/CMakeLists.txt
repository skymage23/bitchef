cmake_minimum_required(VERSION 3.10)

project(bitchef_exceptions)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(bitchef_exceptions STATIC src/development-exceptions.cc)

target_include_directories(bitchef_exceptions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


