cmake_minimum_required(VERSION 3.10)

project(APP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

ADD_SUBDIRECTORY(GFX)
ADD_SUBDIRECTORY(lib)

SET(APP_EXE application)

INCLUDE_DIRECTORIES (
    "${CMAKE_SOURCE_DIR}/lib/cpp-ui"
    "${CMAKE_SOURCE_DIR}/GFX/SFML-2.5.1/include"
)

ADD_EXECUTABLE(${APP_EXE}
    source/main.cpp
)