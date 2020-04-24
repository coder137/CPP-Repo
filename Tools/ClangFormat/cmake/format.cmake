# https://cmake.org/cmake/help/latest/command/get_target_property.html
# https://cmake.org/cmake/help/latest/manual/cmake-properties.7.html#target-
# properties
function(formatsourcelist user_project)
  # message("user_project: ${user_project}")

  get_target_property(USER_SOURCE_LIST ${USER_PROJECT} SOURCES)
  # message("USER_SOURCE_LIST: ${USER_SOURCE_LIST}")

  # list(LENGTH USER_SOURCE_LIST SOURCE_LIST_LENGTH)
  # message("source_list_length: ${SOURCE_LIST_LENGTH}")

  list(TRANSFORM USER_SOURCE_LIST PREPEND "${CMAKE_SOURCE_DIR}/")
  message("FINAL_USER_SOURCE_LIST: ${USER_SOURCE_LIST}") # debugging

  get_target_property(USER_INCLUDE_DIRECTORIES ${USER_PROJECT}
                      INCLUDE_DIRECTORIES)
  # message("header: ${USER_INCLUDE_DIRECTORIES}")

  set(USER_HEADER_LIST "")
  foreach(L_VAR ${USER_INCLUDE_DIRECTORIES})
    # message("l_var: ${L_VAR}")
    file(GLOB VALUE CONFIGURE_DEPENDS ${L_VAR}/*.h)
    # message("value: ${VALUE}")
    list(APPEND USER_HEADER_LIST ${VALUE})
  endforeach()

  message("FINAL_USER_HEADER_LIST: ${USER_HEADER_LIST}") # debugging

  # This exposes the variable to the root
  set(USER_SOURCE_HEADER_LIST ${USER_SOURCE_LIST} ${USER_HEADER_LIST})

  # DONE, Make this for all files
  add_custom_target(
    format ALL
    COMMAND clang-format.exe -i --verbose ${USER_SOURCE_HEADER_LIST}
    VERBATIM USES_TERMINAL)
endfunction()
