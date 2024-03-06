cmake_minimum_required(VERSION 3.16)

project(Sekiro VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_library(Sekiro STATIC)
qt_add_qml_module(Sekiro
    URI Sekiro
    VERSION 1.0

    SOURCES Def.cpp Def.h SekColors.cpp SekColors.h SekColorSet.cpp SekColorSet.h SekTextStyle.cpp SekTextStyle.h SekTheme.cpp SekTheme.h singleton.h stdafx.h
    QML_FILES QML/SekButton.qml QML/SekFocusRectangle.qml QML/SekText.qml
)

set_target_properties(Sekiro PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_compile_definitions(Sekiro
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(Sekiro
    PRIVATE Qt6::Quick)

target_include_directories(Sekiro PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Example Project
qt_add_executable(ExampleProject example/example.cpp)
qt_add_qml_module(ExampleProject
    URI ExampleProjectApp
    VERSION 1.0
    QML_FILES example/example.qml
    QML_FILES QML/SekWindow.qml
)
target_link_libraries(ExampleProject PRIVATE Qt6::Quick Sekiroplugin)
target_compile_definitions(ExampleProject PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
