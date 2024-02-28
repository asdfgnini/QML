cmake_minimum_required(VERSION 3.16)

project(sekiro VERSION 1.0)

#配置通用编译
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#导入Qt相关依赖包
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Quick Qml)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick Qml)


if(QT_VERSION VERSION_GREATER_EQUAL "6.3")
    qt_standard_project_setup()
else()
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTORCC ON)
    set(CMAKE_AUTOUIC ON)
endif()


#遍历所有Cpp文件
file(GLOB_RECURSE CPP_FILES *.cpp *.h)
foreach(filepath ${CPP_FILES})
    string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" filename ${filepath})
    list(APPEND sources_files ${filename})
endforeach(filepath)

message("Source files: ${sources_files}")

if(QT_VERSION VERSION_GREATER_EQUAL "6.2")
    # #删除fluentuiplugin.cpp与fluentuiplugin.h，这些只要Qt5使用，Qt6不需要
    # list(REMOVE_ITEM sources_files fluentuiplugin.h fluentuiplugin.cpp)
    # if (NOT FLUENTUI_BUILD_STATIC_LIB)
    #     list(REMOVE_ITEM sources_files FluentUI.h FluentUI.cpp)
    # endif()

    #遍历所有qml文件
    file(GLOB_RECURSE QML_PATHS *.qml)
    foreach(filepath ${QML_PATHS})
        if(${filepath} MATCHES "Qt${QT_VERSION_MAJOR}/")
            string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" filename ${filepath})
            list(APPEND qml_files ${filename})
        endif()
    endforeach(filepath)

    message("Qml files: ${qml_files}")

    # #遍历所有资源文件
    # file(GLOB_RECURSE RES_PATHS *.png *.jpg *.svg *.ico *.ttf *.webp *.js)
    # foreach(filepath ${RES_PATHS})
    #     if(${filepath} MATCHES "Qt${QT_VERSION_MAJOR}/")
    #         string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" filename ${filepath})
    #         list(APPEND resource_files ${filename})
    #     endif()
    # endforeach(filepath)

    # #修改资源文件导出路径
    # foreach(filepath IN LISTS qml_files resource_files)
    #     string(REPLACE "Qt${QT_VERSION_MAJOR}/imports/FluentUI/" "" filename ${filepath})
    #     set_source_files_properties(${filepath} PROPERTIES QT_RESOURCE_ALIAS ${filename})
    # endforeach()
endif()



set(PLUGIN_TARGET_NAME ${PROJECT_NAME})
set(FLUENTUI_QML_PLUGIN_DIRECTORY ${CMAKE_BINARY_DIR}/Example/Sekiro)


qt_add_library(${PROJECT_NAME} SHARED
    Qt6/SekTextButton.qml
    Qt6/SekToggleButton.qml
    Qt6/SekProgressButton.qml
    Qt6/SekClip.qml
    SekRectangle.cpp SekRectangle.h
    SekTools.cpp SekTools.h
    Qt6/SekLoadingButton.qml
    Qt6/SekProgressRing.qml
    Qt6/SekDropDownButton.qml
    Qt6/SekIcon.qml)

qt_add_qml_module(${PROJECT_NAME}
    PLUGIN_TARGET ${PLUGIN_TARGET_NAME}
    OUTPUT_DIRECTORY ${FLUENTUI_QML_PLUGIN_DIRECTORY}
    VERSION 1.0
    URI "Sekiro"
    #修改qmltypes文件名称。默认fluentuiplugin.qmltypes，使用默认名称有时候import FluentUI 1.0会爆红，所以修改成plugins.qmltypes
    TYPEINFO "plugins.qmltypes"
    SOURCES ${sources_files}
    QML_FILES ${qml_files}
    # RESOURCES ${resource_files}
    RESOURCE_PREFIX "/qt/qml"
)

#去掉mingw生成的动态库libxxx前缀lib，不去掉前缀会导致 module "FluentUI" plugin "fluentuiplugin" not found
if(MINGW)
    set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
endif()

#MSVC Debug 添加后缀d，与Qt插件风格保持一致
if(MSVC)
    set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")
endif()


#链接库
target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::CorePrivate
    Qt${QT_VERSION_MAJOR}::QuickPrivate
    Qt${QT_VERSION_MAJOR}::QmlPrivate
)
