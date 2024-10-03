
#include "Pila.hpp"

Pila::Pila() {
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(int v) {
    pnodoPila nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer() {
    pnodoPila nodo;
    int v;
    if (!ultimo) return 0; // Si no hay elementos, retorna 0 (podría manejarse de otra manera)
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    delete nodo;
    longitud--;
    return v;
}

int Pila::cima() {
    if (!ultimo) return 0; // Si la pila está vacía retorna 0 (esto también podría lanzar una excepción)
    return ultimo->valor;
}

void Pila::mostrar() {
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while (aux) {
        cout << aux->valor << " -> ";
        aux = aux->siguiente;
    }
    cout << "NULL" << endl;
}

int Pila::getLongitud() {
    return this->longitud;
}

Pila::~Pila() {
    pnodoPila aux;
    while (ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}
