CC=gcc
CFLAGS=-Wall -Wextra -pedantic -Ofast

.phony: clean
default: build

build:
	$(CC) -c editor.c main.c $(CFLAGS)
	$(CC) editor.o main.o -o suffe

clean:
	rm -rf *.o suffe
