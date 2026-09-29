#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    int* puntero = numeros;

    cout << "Valores iniciales:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << *(puntero + i) << endl;
    }

    *(puntero + 0) = 15;
    *(puntero + 2) = 35;
    *(puntero + 4) = 55;
    cout << endl;
    cout << "Valores modificados:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << *(puntero + i) << endl;
    }

    cout << endl;
    cout << "Direccion del arreglo: " << numeros << endl;
    cout << "Direccion almacenada en el puntero: " << puntero << endl;
    return 0;
}
