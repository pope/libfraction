AM_CFLAGS = -Wall -g

lib_LTLIBRARIES = libfraction.la
libfraction_la_SOURCES = fraction.h fraction.c

include_HEADERS = fraction.h

check_PROGRAMS = main fraction_test
main_SOURCES = test/main.c $(libfraction_la_SOURCES)
main_CFLAGS = ${AM_CFLAGS}

fraction_test_SOURCES = test/fraction_test.c $(libfraction_la_SOURCES)
fraction_test_CFLAGS = ${AM_CFLAGS} -DUNIT_TESTING=1 -fprofile-arcs -ftest-coverage
fraction_test_LDADD = ${CMOCKERY_LIBS}

TESTS = $(check_PROGRAMS)

clean-local:
	-rm -rf *.gcda *.gcno *gcov
