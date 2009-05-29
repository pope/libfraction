AM_CFLAGS = -Wall -g -I$(top_srcdir)/src/ -DUNIT_TESTING=1

check_PROGRAMS = main fraction_test
main_SOURCES = main.c
main_LDADD = $(top_srcdir)/src/libfraction.la

fraction_test_SOURCES = fraction_test.c
fraction_test_LDADD = $(top_srcdir)/src/libfraction.la ${CMOCKERY_LIBS}

TESTS = $(check_PROGRAMS)
