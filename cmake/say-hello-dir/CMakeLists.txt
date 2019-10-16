#add external libraries
add_library(
    say-hello #library name
    src/hello.hpp #header file
    src/hello.cpp #source file

)
target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")