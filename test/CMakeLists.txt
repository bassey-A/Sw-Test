cmake_minimum_required(VERSION 3.28)

set(This CTest_Sample_Tests)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main
)
FetchContent_MakeAvailable(googletest)

add_executable(${This} tests.cc)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(${This} PUBLIC gtest_main Functions)


add_test(NAME ${This} COMMAND ${This})
