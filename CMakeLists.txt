cmake_minimum_required(VERSION 3.10)
project(CrossPlatformCPPTemplate VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True) # for consistency

# Include directories
include_directories(include)

# Automatically add all source files
file(GLOB SOURCES "src/*.cpp")

# Define the output executable
add_executable(CrossPlatformCPPTemplate ${SOURCES})

# Install binaries
install(TARGETS CrossPlatformCPPTemplate DESTINATION bin)

# Additional custom targets below
add_custom_target(debug
  COMMAND ${CMAKE_COMMAND} --build . --config Debug
)