#include <iostream>
using namespace std;

int main() {
    int numero = 10;

    int* puntero = &numero;

    cout << "Valor inicial: " << numero << endl;

    *puntero = 20;

    cout << "Valor modificado con puntero: " << numero << endl;

    int& referencia = numero;

    referencia = 30;
    cout << "Valor modificado con referencia: " << numero << endl;
    cout << "Direccion de numero: " << &numero << endl;
    cout << "Direccion almacenada en el puntero: " << puntero << endl;
    cout << "Direccion de la referencia: " << &referencia << endl;
    return 0;
}
