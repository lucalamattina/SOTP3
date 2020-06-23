PHONY: clean all server client

all: clean server client

GCCFLAGS=-Wall -std=c99 -pedantic -D _XOPEN_SOURCE=500
GCC=gcc
VALGRINDFLAGS=--leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt

server:
	$(GCC) $(GCCFLAGS) myserver.c challenges.c -o myserver
	touch .RUN_ME
	objcopy --add-section .RUN_ME=.RUN_ME  myserver

client:
	$(GCC) $(GCCFLAGS) client.c -o client

clean:
	rm -rf *.o *.elf *.bin

valgrind:
	valgrind $(VALGRINDFLAGS) ./myserver
