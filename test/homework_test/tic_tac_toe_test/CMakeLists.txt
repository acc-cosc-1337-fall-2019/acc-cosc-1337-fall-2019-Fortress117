add_executable(tic_tac_toe_test "tic_tac_toe_test.cpp")
target_link_libraries(tic_tac_toe_test tic_tac_toe_library)
add_test(NAME tic_tac_toe_test COMMAND tic_tac_toe_test -s)