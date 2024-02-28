cmake_minimum_required(VERSION 3.16)

project(Sekiro VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})

message("Binary Dir:${CMAKE_BINARY_DIR}")
find_package(Qt6 6.2 COMPONENTS Quick Core Qml REQUIRED)

qt_add_library(Sekiro STATIC)
qt_add_qml_module(Sekiro
    URI Sekiro
    VERSION 1.0
    # QML_FILES Qt6/SekiroControls.qml
    # SOURCES sekiro.cpp sekiro.h
    QML_FILES Qt6/SekiroButton.qml
    SOURCES SekColorSet.cpp SekColorSet.h sekiro.cpp sekiro.h singleton.h stdafx.h
    SOURCES SekTheme.cpp SekTheme.h
    SOURCES Def.cpp Def.h SekColors.cpp SekColors.h
    RESOURCE_PREFIX "/qt/qml"
    SOURCES SekTextStyle.cpp SekTextStyle.h
    QML_FILES Qt6/SekFocusRectangle.qml
    QML_FILES Qt6/SekText.qml

)

#去掉mingw生成的动态库libxxx前缀lib，不去掉前缀会导致 module "FluentUI" plugin "fluentuiplugin" not found
if(MINGW)
    set_target_properties(Sekiro PROPERTIES PREFIX "")
endif()

#MSVC Debug 添加后缀d，与Qt插件风格保持一致
if(MSVC)
    set_target_properties(Sekiro PROPERTIES DEBUG_POSTFIX "d")
endif()

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



# qt_add_executable(ExampleProject example/example.cpp)
# qt_add_qml_module(ExampleProject
#     URI ExampleProjectApp
#     VERSION 1.0
#     QML_FILES example/example.qml
# )
# target_link_libraries(ExampleProject PRIVATE Qt6::Quick Qt6::Core Qt6::Qml Sekiroplugin)
# target_compile_definitions(ExampleProject PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
