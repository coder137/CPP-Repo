cmake_minimum_required(VERSION 3.16)
project(myproject CXX)

# User defined
set(PROJECT_TARGET "conan_minimal")
set(CONAN_PACKAGE spdlog/1.5.0 
                  docopt.cpp/0.6.2)
set(CONAN_LINK_PACKAGE CONAN_PKG::spdlog 
                       CONAN_PKG::docopt.cpp)

# Defines here required for conan_cmake_run
set(CMAKE_BUILD_TYPE "Debug")

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(REQUIRES 
                ${CONAN_PACKAGE}
                BASIC_SETUP CMAKE_TARGETS
                BUILD missing)

# ? debugging
message("Conan Libs: ${CONAN_LIBS}") # Set by the program
message("Conan Package: ${CONAN_PACKAGE}")
message("Conan Link Package: ${CONAN_LINK_PACKAGE}")

add_executable(${PROJECT_TARGET} main.cpp)

# When CMAKE_TARGETS are added we use CONAN_PKG::<package_name>
target_link_libraries(${PROJECT_TARGET} ${CONAN_LINK_PACKAGE})

# Will not work since CMAKE_TARGETS has been added
# target_link_libraries(${PROJECT_TARGET} ${CONAN_LIBS}) 

add_custom_target(run
   DEPENDS ${PROJECT_TARGET}
   COMMAND "${CMAKE_BINARY_DIR}/bin/${PROJECT_TARGET}.exe"
)
