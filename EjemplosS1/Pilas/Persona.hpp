#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Persona {
private:
    bool genero; // 1 para mujer, 0 para hombre
    int edad;
    char dni[10];

    // Genera un DNI aleatorio con su letra correspondiente
    void generarDNI() {
        const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
        int numero = rand() % 100000000; // Genera un número de DNI aleatorio de hasta 8 dígitos
        int modulo = numero % 23; // Calcula el índice para la letra del DNI
        sprintf(dni, "%08d%c", numero, letras[modulo]); // Almacena en dni el número formateado con 8 dígitos y su letra correspondiente
    }

public:
    // Constructor que inicializa la persona con una edad dada, generando género y DNI aleatorios
    Persona(int edad) : edad(edad) {
        srand(time(NULL) + edad); // Inicializa la semilla del generador de números aleatorios
        genero = rand() % 2; // Asigna un género de forma aleatoria
        generarDNI(); // Llama al método para generar un DNI
    }

    ~Persona() {}

    // Métodos accesores y mutadores típicos
    int getEdad() const {
        return edad;
    }

    bool esMujer() const {
        return genero;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    // Imprime la información de la persona
    void mostrar() const {
        cout << "DNI: " << dni << ", Género: " << (esMujer() ? "Mujer" : "Hombre") << ", Edad: " << edad << endl;
    }
};
