#include <iostream>
#include <conio.h>  // Necesario para usar getch()

using namespace std;

int main(int argc, char** argv)
{
    char c;
    bool test;
    cout << "Pulse teclas numericas. Acabe pulsando ESC\n";
    do {
        c = getch();  // Lee un carácter sin mostrarlo en pantalla
        test = ((c >= '0') && (c <= '9'));
        if (test) {
            cout << c << " pulsado.\n";
        }
    } while(c != 27);  // 27 es el código ASCII para ESC

    return 0;
}

