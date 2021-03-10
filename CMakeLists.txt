cmake_minimum_required(VERSION 3.10)

project(CPP-UI)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

INCLUDE_DIRECTORIES(
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/SFML-2.5.1/include"
)

add_library(
    cpp-ui STATIC
    source/ui.cpp
)

SET(APP_EXE a.out)

ADD_EXECUTABLE( ${APP_EXE}
    source/main.cpp
)

TARGET_LINK_LIBRARIES( ${APP_EXE}
    cpp-ui
)

SET_TARGET_PROPERTIES( ${APP_EXE}
    PROPERTIES
    LINK_FLAGS
    "-lsfml-graphics -lsfml-window -lsfml-system"
)