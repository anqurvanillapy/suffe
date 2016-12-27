CC=gcc

.phony: clean
default: build

build:
	$(CC) editor.c -Wall -Wextra -pedantic
