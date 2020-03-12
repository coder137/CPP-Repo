cmake_minimum_required(VERSION 3.16)
project(myproject CXX)

# User defined
set(PROJECT_TARGET "conan_minimal")

# Defines here required for conan_cmake_run
set(CMAKE_BUILD_TYPE "Debug")

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(REQUIRES spdlog/1.5.0
                BASIC_SETUP 
                BUILD missing)

add_executable(${PROJECT_TARGET} main.cpp)
target_link_libraries(${PROJECT_TARGET} ${CONAN_LIBS})

add_custom_target(run
   DEPENDS ${PROJECT_TARGET}
   COMMAND "${CMAKE_BINARY_DIR}/bin/${PROJECT_TARGET}.exe"
)
