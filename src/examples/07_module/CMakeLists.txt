add_library(ex_07_library "shape.cpp" "shape.h"
                                "circle.cpp" "circle.h"
								"line.cpp" "line.h")
add_executable(ex_07_exe "main.cpp" "shape.cpp" "circle.cpp" "line.cpp")