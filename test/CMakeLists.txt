cmake_minimum_required(VERSION 3.28)

set(This CTest_Sample_Tests)

add_executable(${This} tests.cc)
target_link_libraries(${This} PUBLIC gtest_main Functions)

add_test(NAME ${This} COMMAND ${This})
