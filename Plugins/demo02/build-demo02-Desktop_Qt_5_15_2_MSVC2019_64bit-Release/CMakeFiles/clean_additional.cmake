# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\demo02_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\demo02_autogen.dir\\ParseCache.txt"
  "demo02_autogen"
  )
endif()