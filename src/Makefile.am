AM_CFLAGS = -Wall -g -ansi

lib_LTLIBRARIES = libfraction.la
libfraction_la_SOURCES = fraction.h fraction.c

bin_PROGRAMS = main
main_SOURCES = main.c
main_LDADD = libfraction.la

include_HEADERS = fraction.h
