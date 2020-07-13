# Add dependencies to your compilation unit
# NOTE, This can also be a library
target_sources(${USER_PROJECT_NAME} PRIVATE foo.c)
target_include_directories(${USER_PROJECT_NAME} PRIVATE .)

# Add your test here
add_subdirectory(test)
