# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Source files
SRCS = main.c sum.c difference.c product.c division.c factorial.c 

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HDRS = calc.h

# Library
LIB = libcalc.a

# Targets
all: $(LIB) calculator

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

calculator: $(LIB) $(HDRS) main.o
	$(CC) $(CFLAGS) main.o -L. -lcalc -o calculator

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(LIB) calculator

