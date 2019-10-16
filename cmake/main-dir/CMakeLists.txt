add_executable(MyProject src/main.cpp)

# target_link_libraries(where mode external_library_name)
target_link_libraries(MyProject PRIVATE say-hello)