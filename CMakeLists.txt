cmake_minimum_required(VERSION 3.28)

set(This CTest_Sample)
project(
    ${This}
    VERSION 0.1
    LANGUAGES C CXX
)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 23)

include(CTest)
add_subdirectory(googletest)


add_library(Functions lib/fxns.cc)
target_include_directories(Functions PUBLIC include)

add_subdirectory(test)

add_executable(${This} src/main.cc)
target_link_libraries(${This} Functions)
