cmake_minimum_required(VERSION 3.10)
project(ClionQt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.14.2\\5.14.2\\mingw73_64")

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(ClionQt main.cpp)
target_link_libraries(ClionQt Qt5::Widgets)