cmake_minimum_required(VERSION 3.23)

project(MyApp
    VERSION 0.1
    LANGUAGES CXX
)

add_subdirectory(src)

message(STATUS "${var}")

if(PROJECT_IS_TOP_LEVEL)
  add_subdirectory(packaging)
endif()