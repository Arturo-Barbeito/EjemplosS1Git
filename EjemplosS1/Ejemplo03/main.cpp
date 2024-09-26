#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int x = 'a';  // Inicializa x con el valor ASCII de 'a'
    x = x + 1;    // Incrementa el valor de x en 1
    char c = x;   // Convierte el valor de x en un caracter

    cout << "El valor del int \"x\" es " << x << "." << endl;
    cout << "El valor del char \"c\" es " << c << "." << endl;

    return 0;
}
