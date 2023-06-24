CC = gcc
CFLAGS = -Wall -g

all: programa

programa: main.c
	$(CC) $(CFLAGS) -o programa main.c

run: programa
	gdb -ex run ./programa

clean:
	rm -f programa
