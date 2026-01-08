cmake_minimum_required(VERSION 3.30) # VS 18 ships with newer CMake

project(FastVulkan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(FastVulkan)

target_sources(FastVulkan PRIVATE
    src/Application.cpp
    src/Core/Logging/Log.ixx
)

# Output layout Visual Studio expects
set_target_properties(FastVulkan PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib/$<CONFIG>"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib/$<CONFIG>"
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
)

# MUST be after add_executable
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT FastVulkan)