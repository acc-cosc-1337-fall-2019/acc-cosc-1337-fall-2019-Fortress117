add_executable(ex_12_tests "12_module_tests.cpp")
target_link_libraries(ex_12_tests ex_12_01_library ex_12_02_library ex_12_03_library ex_12_04_library ex_12_05_library
                                  ex_12_06_library ex_12_07_library ex_12_08_library ex_12_09_library ex_12_10_library)
		add_test(NAME ex_12_tests COMMAND ex_12_tests -s)