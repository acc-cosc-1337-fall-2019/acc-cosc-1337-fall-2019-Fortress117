add_executable(ex_11_tests "11_module_tests.cpp")
target_link_libraries(ex_11_tests ex_11_01_library ex_11_02_library ex_11_03_library ex_11_04_library
                      ex_11_05_library ex_11_06_library ex_11_07_library ex_11_08_library ex_11_09_library)
add_test(NAME ex_11_tests COMMAND ex_11_tests -s)