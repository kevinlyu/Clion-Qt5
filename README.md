# Configure Qt5 environment in Clion

## Version Info
- Qt5.14.2
- mingw7.3 x64
- Clion 2020.1

## Configuration steps

1. Edit CMake

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

2. Copy "Qt5Core.dll", "Qt5Gui.dll", and "Qt5Widgets.dll" into cmake-build-debug directory

3. In "CMake" --> "CMake options", add\

         "-DCMAKE_PREFIX_PATH=C:\Qt\Qt5.14.2\5.14.2\mingw73_64\"

4. In "Edit Run/Debug configurations" --> "Environment Variables", add\

        "QT_QPA_PLATFORM_PLUGIN_PATH=C:\Qt\Qt5.14.2\5.14.2\mingw73_64\plugins\platforms"

## Reference
[https://www.jetbrains.com/help/clion/qt-tutorial.html](https://www.jetbrains.com/help/clion/qt-tutorial.html)
