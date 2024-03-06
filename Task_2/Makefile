CC = gcc
CFLAGS = -Wall -Wextra -Werror


# Default target
all: libconvert.so convert


convert.o: convert.c 
	$(CC) $(CFLAGS) -fpic -c convert.c

libconvert.so: convert.o
	$(CC) -shared -o libconvert.so *.o
	ldconfig

main: main.c 
	$(CC)  main.c -L . -l convert -o main

# Clean target
clean:
	rm -f  libconvert.so main convert.o

