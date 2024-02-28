cmake_minimum_required(VERSION 3.16)

project(Sekiro VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Quick Qml)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick Qml)


if(QT_VERSION VERSION_GREATER_EQUAL "6.2")
    #遍历所有资源文件
    file(GLOB_RECURSE RES_PATHS *.png *.jpg *.svg *.ico *.ttf *.webp *.js)
    foreach(filepath ${RES_PATHS})
        if(${filepath} MATCHES "Qt${QT_VERSION_MAJOR}/")
            string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" filename ${filepath})
            list(APPEND resource_files ${filename})
        endif()
    endforeach(filepath)
    message("Current Source DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
    message("resource file: ${resource_files}")
    #修改资源文件导出路径
    foreach(filepath IN LISTS qml_files resource_files)
        string(REPLACE "Qt${QT_VERSION_MAJOR}/" "" filename ${filepath})
        set_source_files_properties(${filepath} PROPERTIES QT_RESOURCE_ALIAS ${filename})
    endforeach()
endif()

qt_add_library(Sekiro STATIC)
qt_add_qml_module(Sekiro
    URI Sekiro
    VERSION 1.0
    QML_FILES SekiroControls.qml
    SOURCES sekiro.cpp sekiro.h
    SOURCES Def.cpp Def.h SekColors.cpp SekColors.h SekColorSet.cpp SekColorSet.h sekiro.cpp sekiro.h SekRectangle.cpp SekRectangle.h SekTextStyle.cpp SekTextStyle.h SekTheme.cpp SekTheme.h SekTools.cpp SekTools.h singleton.h stdafx.h
    QML_FILES Qt6/controls/SekClip.qml Qt6/controls/SekFocusRectangle.qml Qt6/controls/SekIcon.qml Qt6/controls/SekIconButton.qml Qt6/controls/SekiroButton.qml Qt6/controls/SekiroControls.qml Qt6/controls/SekLoader.qml Qt6/controls/SekLoadingButton.qml Qt6/controls/SekProgressButton.qml Qt6/controls/SekProgressRing.qml Qt6/controls/SekShadow.qml Qt6/controls/SekText.qml Qt6/controls/SekTextButton.qml Qt6/controls/SekToggleButton.qml Qt6/controls/SekTooltip.qml
    RESOURCES ${resource_files}

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

#遍历所有资源文件
file(GLOB_RECURSE RES_PATHS *.png *.jpg *.svg *.ico *.ttf *.webp *.obj)
foreach(filepath ${RES_PATHS})
    string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" filename ${filepath})
    list(APPEND example_resource_files ${filename})
endforeach(filepath)

message("example_resource_files: ${example_resource_files}")
qt_add_executable(ExampleProject example/example.cpp)
qt_add_qml_module(ExampleProject
    URI ExampleProjectApp
    VERSION 1.0
    QML_FILES example/example.qml
    RESOURCES ${example_resource_files}


)
target_link_libraries(ExampleProject PRIVATE Qt6::Quick Qt6::Core Qt6::Qml Sekiroplugin)
target_compile_definitions(ExampleProject PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
