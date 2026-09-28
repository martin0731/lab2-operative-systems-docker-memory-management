#include <iostream>

using namespace std;

int main() {

    int numero;
    int factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial de " << numero << " = " << factorial << endl;

    return 0;
}
