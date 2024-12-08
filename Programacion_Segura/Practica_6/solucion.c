#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente; //Puntero al siguiente nodo
} Nodo;

Nodo* crearNodo(int dato) {
    Nodo* nuevoNodo = (Nodo*)calloc(1, sizeof(Nodo)); // Sustituimos malloc por calloc para inicializar a 0
    if (nuevoNodo == NULL)
    {
        printf("Error en la reserva de memoria");
        exit(1);
    }

    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

void push(Nodo** cima, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    nuevoNodo->siguiente = *cima;
    *cima = nuevoNodo;
}
int pop(Nodo** cima) {
    if (*cima == NULL) {
        printf("La pila está vacía\n");
        return -1;
    }

    Nodo* temp = *cima;
    int dato = temp->dato;  // Guardamos el dato antes de liberar
    *cima = (*cima)->siguiente;

    printf("%d", temp->dato); //Imprimimos el dato antes de liberarlo
    free(temp);

    return dato;
}

void imprimirPila(Nodo* cima) {
    while (cima != NULL) {
        printf("%d -> ", cima->dato);
        cima = cima->siguiente;
    }
    printf("NULL\n");
}

void liberarPila(Nodo** cima) {
    Nodo* actual = *cima;
    while (actual != NULL) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        free(temp);
    }
    *cima = NULL;}


int main() {
    Nodo* pila = NULL;
    int n;

    // Solicitar al usuario el número de elementos
    printf("Ingrese el número de elementos a insertar en la pila: ");

    //Validar la entrada para comprobar que no se introduzcan número negativos ni supere MAX_INT
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada no válida\n");
        return 1;
    }

    // Insertar los elementos en la pila (multiplicados por cuatro)
    for (int i = 1; i <= n; i++) {
        push(&pila, i * 4);
    }

    // Imprimir la pila inicial
    printf("Pila inicial:\n");
    imprimirPila(pila);

    // Proceso de manipulación de la pila
    int contador = 1;

    while (pila != NULL) {
        for (int i = 0; i < 2; i++) {
            if (pila != NULL) {
                printf("Elemento removido: %d\n", pop(&pila));
            }
        }

        // Insertar un nuevo elemento
        if (pila != NULL) {
            push(&pila, contador * 4);
            printf("Elemento insertado: %d\n", contador * 4);
            contador++;
        }

        imprimirPila(pila);
    }

    liberarPila(&pila);
    //liberarPila(&pila); Evitar doble liberación

    return 0;
}
