set(SekiroPath ${CMAKE_CURRENT_LIST_DIR})
message("Current path:${CMAKE_CURRENT_LIST_DIR}")

if (CMAKE_BUILD_TYPE MATCHES "Release")
    set(SekiroRes ${SekiroPath}/Sekiro/Sekiro.qrc CACHE STRING "tao quick res path")
    set(SekiroImportPath "qrc:///" CACHE STRING "tao quick import path")
else()
    set(SekiroImportPath "file:///${SekiroPath}/" CACHE STRING "tao quick import path")
endif()

add_compile_definitions(SekiroImportPath="${SekiroImportPath}")

#add_compile_definitions(QML_IMPORT_PATH="${TaoQuickPath}")
#add_compile_definitions(QML2_IMPORT_PATH="${TaoQuickPath}")
#add_compile_definitions(QML_DESIGNER_IMPORT_PATH="${TaoQuickPath}")

set(QML_IMPORT_PATH ${SekiroPath} CACHE STRING "")
set(QML2_IMPORT_PATH ${SekiroPath} CACHE STRING "")
set(QML_DESIGNER_IMPORT_PATH ${SekiroPath} CACHE STRING "")
