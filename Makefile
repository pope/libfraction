CC=gcc
CFLAGS=-Wall -g -ansi

main: main.o fraction.o

clean:
	rm -f main *.o
