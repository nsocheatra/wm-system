#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xlnt::xlnt" for configuration "Debug"
set_property(TARGET xlnt::xlnt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(xlnt::xlnt PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libxlntd.so.1.6.1"
  IMPORTED_SONAME_DEBUG "libxlntd.so.1.6.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS xlnt::xlnt )
list(APPEND _IMPORT_CHECK_FILES_FOR_xlnt::xlnt "${_IMPORT_PREFIX}/lib/libxlntd.so.1.6.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
