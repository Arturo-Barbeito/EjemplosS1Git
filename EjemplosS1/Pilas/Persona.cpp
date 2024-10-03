#include "Persona.hpp"
#include <vector>

int main() {
    vector<Persona> personas; // Vector que almacena objetos de tipo Persona

    // Crear personas con edades desde 18 hasta 27 años, cada una con un género y DNI generado automáticamente
    for (int i = 18; i <= 27; ++i) {
        personas.push_back(Persona(i)); // Instancia una nueva Persona y la añade al vector
    }

    // Recorre el vector y muestra la información de cada persona
    for (const auto& persona : personas) {
        persona.mostrar(); // Llama al método mostrar() de cada objeto Persona en el vector
    }

    return 0;
}

