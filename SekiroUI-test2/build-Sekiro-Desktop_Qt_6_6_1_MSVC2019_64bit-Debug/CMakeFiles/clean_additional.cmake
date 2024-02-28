# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sekiro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sekiro_autogen.dir\\ParseCache.txt"
  "sekiro_autogen"
  )
endif()
