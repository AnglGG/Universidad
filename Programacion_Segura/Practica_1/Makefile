CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror #Con esta opción no se compila ni con trazas ni con asserts
#A mí me gusta utilizar el flag -Werror para que cada advertencia se convierta en error aunque usted dijo en clase que muchas advertencias 
#no tienen por qué ser errores así que dependiendo de lo que me diga lo pondré o lo quitaré

factorial: factorial.o
	$(CC) $(CFLAGS) -o $@ $^
# Aquí pongo $@ $^ para que haga referencia al nombre que quiero que tenga el ejecutable y al archivo objeto que se está construyendo
# Y lo pongo así para que se recompile solo si el facotiral.o ha cambiado, evitando relink innecsario

factorial.o: factorial.c
	$(CC) $(CFLAGS) -c $< -o $@

# Aquí $< hace referencia a la primera dependencia.
# $@ se refiere al objetivo que se va a generar, en este caso 'factorial.o' que es el archivo que se produce al compilar factorial.c
# De nuevo, al usar $< y $@ en lugar de nombres explícitos, mantengo la regla más flexible y eficiente

invariant: CFLAGS += -DDEBUG_INVARIANT #Para compilar con asserts
invariant: factorial

trace: CFLAGS += -DDEBUG_TRACE #Para compilar con trazas
trace: factorial

debug: CFLAGS += -DDEBUG_TRACE -DDEBUG_INVARIANT #Para compilar con trazas y asserts
debug: factorial

clean:
	rm -rf *.o factorial

run: factorial
	./factorial

debug_run: debug
	gdb ./factorial