cmake_minimum_required(VERSION 3.23)

project(MyApp
    VERSION 0.1
    LANGUAGES CXX # checks compiler and linker for each listed language
)

add_subdirectory(src)

set(var $<PROJECT_IS_TOP_LEVEL:lol>)

message(STATUS "${var}")

if(PROJECT_IS_TOP_LEVEL)
  add_subdirectory(packaging)
endif()

#[[target_link_libraries(MyExe1
    #PUBLIC
    #PRIVATE
    #INTERFACE
    # Can also link library files by providing path to file
)]]

#[[

// Simple build 
mkdir build
cd build
cmake -G Ninja ../src
cmake --build . --config Debug --target MyApp (If no target is specified, ALL will be built.)

]]