cmake_minimum_required(VERSION 3.12)
project(wx_Hello_World)

set(CMAKE_BINARY_DIR, "/home/pi/Desktop/wxWidget_Test/")

# Find required packages
find_package(OpenCV REQUIRED)
find_package(wxWidgets REQUIRED net core base)

# Include directories after finding packages
include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCES
    main.cpp
)

# Use wxWidgets configuration
include(${wxWidgets_USE_FILE})

add_executable(wx_Hello_World ${SOURCES})

# Link libraries
target_link_libraries(wx_Hello_World ${OpenCV_LIBS} ${wxWidgets_LIBRARIES})

set(CMAKE_C_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")

# # Create a custom target to clean the build directory
# add_custom_target(clean_build
# COMMAND ${CMAKE_COMMAND} -E remove_directory "${CMAKE_BINARY_DIR}/"
# COMMENT "Cleaning the build directory"
# )

# # Add a dependency to the clean_build target
# add_dependencies(wx_Hello_World clean_build)
