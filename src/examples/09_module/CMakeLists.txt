add_library(ex_09_library "temperature.cpp" "temperature.h"
								"temperature_data.cpp" "temperature_data.h")
add_executable(ex_09_exe "main.cpp" "temperature.cpp" "temperature_data.cpp")