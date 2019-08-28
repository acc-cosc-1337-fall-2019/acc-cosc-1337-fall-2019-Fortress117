add_executable(cw_04_tests "sequence_tests.cpp")
target_link_libraries(cw_04_tests cw_04_library)
add_test(NAME cw_03_tests COMMAND cw_03_tests -s)