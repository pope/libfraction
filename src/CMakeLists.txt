option(UNIT_TESTING "Turn on unit testing" ON)

if(UNIT_TESTING)
    set_source_files_properties(fraction.c COMPILE_FLAGS -DUNIT_TESTING)
endif(UNIT_TESTING)

add_library(fraction SHARED fraction.c fraction.h)
target_link_libraries(fraction cmockery)
