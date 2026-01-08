cmake_minimum_required(VERSION 4.2)

project(FastVulkan)

# Redirect all build output to build folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/lib")

# Redirect CMake generated files to build folder
set(CMAKE_BINARY_DIR "${PROJECT_SOURCE_DIR}/build" CACHE INTERNAL "Build directory" FORCE)

# Set C++ standard to latest draft
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(FastVulkan)

target_sources(FastVulkan
    PRIVATE
        src/Core/Logging/Log.ixx
        src/Application.cpp
)