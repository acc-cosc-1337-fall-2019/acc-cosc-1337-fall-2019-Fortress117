add_executable(ex_09_tests "09_module_tests.cpp")
target_link_libraries(ex_09_tests ex_09_library)
add_test(NAME ex_09_tests COMMAND ex_09_tests -s)