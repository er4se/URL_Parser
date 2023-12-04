# CMake generated Testfile for 
# Source directory: C:/Users/er4se/cpp_works/URL_Parser/URL_Parser
# Build directory: C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/out
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(unit_tests "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/out/Debug/url_parser_test.exe")
  set_tests_properties(unit_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;15;add_test;C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(unit_tests "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/out/Release/url_parser_test.exe")
  set_tests_properties(unit_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;15;add_test;C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(unit_tests "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/out/MinSizeRel/url_parser_test.exe")
  set_tests_properties(unit_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;15;add_test;C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(unit_tests "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/out/RelWithDebInfo/url_parser_test.exe")
  set_tests_properties(unit_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;15;add_test;C:/Users/er4se/cpp_works/URL_Parser/URL_Parser/CMakeLists.txt;0;")
else()
  add_test(unit_tests NOT_AVAILABLE)
endif()
