cmake_minimum_required(VERSION 3.0)
project(HelloWxWidgets)

# Find the wxWidgets package (this assumes wxWidgets is installed)
find_package(wxWidgets COMPONENTS core base)

if(wxWidgets_FOUND)
    include(${wxWidgets_USE_FILE})
    
    # Define your executable and list the source files
    add_executable(HelloWxWidgets main.cpp)
    
    # Link the executable with the wxWidgets libraries
    target_link_libraries(HelloWxWidgets ${wxWidgets_LIBRARIES})
    
else()
    message(FATAL_ERROR "wxWidgets not found. Please install wxWidgets.")
endif()
