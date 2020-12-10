cmake_minimum_required(VERSION 3.1.0)
project(qdialogtest VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(qdialogtest
  main.cpp
  MyDialog.cpp
  MyDialog.h
  )

target_link_libraries(qdialogtest Qt5::Widgets)
