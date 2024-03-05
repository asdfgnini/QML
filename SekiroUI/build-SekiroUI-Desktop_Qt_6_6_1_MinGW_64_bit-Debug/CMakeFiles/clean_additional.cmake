# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Example\\CMakeFiles\\SekExample_autogen.dir\\AutogenUsed.txt"
  "Example\\CMakeFiles\\SekExample_autogen.dir\\ParseCache.txt"
  "Example\\SekExample_autogen"
  "Sekiro\\CMakeFiles\\sekiro_autogen.dir\\AutogenUsed.txt"
  "Sekiro\\CMakeFiles\\sekiro_autogen.dir\\ParseCache.txt"
  "Sekiro\\sekiro_autogen"
  )
endif()
