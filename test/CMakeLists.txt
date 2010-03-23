include_directories(../src)

add_executable(fraction_test fraction_test.c)
target_link_libraries(fraction_test fraction cmockery)

add_test(fraction_test fraction_test)
