#include "Cola.hpp"

Cola::Cola() {
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(int v) {
    pnodoCola nuevo = new NodoCola(v);
    if (ultimo) {
        ultimo->siguiente = nuevo;
    }
    ultimo = nuevo;
    if (!primero) {
        primero = nuevo;
    }
    longitud++;
}

int Cola::eliminar() {
    pnodoCola nodo;
    int v;
    if (!primero) return 0; // Si la cola está vacía retorna 0, podría manejarse de otra forma
    nodo = primero;
    primero = nodo->siguiente;
    if (!primero) {
        ultimo = NULL;
    }
    v = nodo->valor;
    delete nodo;
    longitud--;
    return v;
}

void Cola::mostrar() {
    pnodoCola aux = primero;
    cout << "\tEl contenido de la cola es: ";
    while (aux) {
        cout << aux->valor << " -> ";
        aux = aux->siguiente;
    }
    cout << "NULL" << endl;
}

int Cola::verPrimero() {
    if (!primero) return 0; // Si la cola está vacía retorna 0, podría lanzar una excepción
    return primero->valor;
}

Cola::~Cola() {
    while (primero) {
        eliminar();
    }
}

