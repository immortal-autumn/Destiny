CC = clang
CFLAGS = -c -Wall -Wextra

all: main print_MSG.c

clean: 
	rm -f main *.o

main: main.o print_MSG.o
	${CC} ${CFLAGS} main.o print_MSG.o -o main

print_MSG.c: print_MSG.c
	${CC} ${CFLAGS} print_MSG.c -o print_MSG.o

