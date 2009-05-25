CC=gcc
CFLAGS=-Wall -g

main: main.o fraction.o

clean:
	rm -f main *.o
