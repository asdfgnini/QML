# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Sekiro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiro_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\Sekiro_qmlcache_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiro_qmlcache_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\Sekiro_resources_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiro_resources_1_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\Sekiro_resources_2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiro_resources_2_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\Sekiroplugin_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiroplugin_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\Sekiroplugin_init_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Sekiroplugin_init_autogen.dir\\ParseCache.txt"
  "Sekiro_autogen"
  "Sekiro_qmlcache_autogen"
  "Sekiro_resources_1_autogen"
  "Sekiro_resources_2_autogen"
  "Sekiroplugin_autogen"
  "Sekiroplugin_init_autogen"
  )
endif()
