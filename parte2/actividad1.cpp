#include <iostream>
using namespace std;

int main() {
    int numero = 10;

    cout << "Valor inicial: " << numero << endl;
    cout << "Direccion de memoria: " << &numero << endl;

    int* puntero = &numero;

    *puntero = 25;

    cout << "Nuevo valor: " << numero << endl;
    cout << "Direccion de memoria: " << &numero << endl;

    return 0;
}
