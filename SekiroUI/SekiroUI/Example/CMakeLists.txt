cmake_minimum_required(VERSION 3.16)

project(SekExample VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)


qt_add_executable(SekExample
    main.cpp
)

qt_add_qml_module(SekExample
    URI example
    VERSION 1.0
    QML_FILES main.qml 
)

target_link_libraries(SekExample PRIVATE Qt6::Quick)
