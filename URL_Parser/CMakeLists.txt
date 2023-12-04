# CMakeList.txt

cmake_minimum_required(VERSION 3.0)

project(URL_Parser)

set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_STANDART_REQUIRED ON)

add_executable(url_parser Main.cpp URLParser.cpp)

add_executable(url_parser_test Test_Main.cpp URLParser_Test.cpp) 

enable_testing()
add_test(NAME unit_tests COMMAND url_parser_test)