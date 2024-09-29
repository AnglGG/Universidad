CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror 
#A mí me gusta utilizar el flag -Werror para que cada advertencia se convierta en error aunque usted dijo en clase que muchas advertencias 
#no tienen por qué ser errores así que dependiendo de lo que me diga lo pondré o lo quitaré

no_invariant: CFLAGS += -DNDEBUG #Para compilar sin asserts
no_invariant: factorial

debug: CFLAGS += -DDEBUG
debug: factorial

all:factorial

factorial: factorial.o
	$(CC) $(CFLAGS) -o factorial factorial.o

factorial.o: factorial.c
	$(CC) $(CFLAGS) -c factorial.c

clean:
	rm -rf *.o factorial

run: factorial
	./factorial

debug_run: debug
	gdb ./factorial