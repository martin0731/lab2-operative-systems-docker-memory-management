#include <iostream>

using namespace std;

int main() {

    int numeros[] = {1, 2, 3, 4, 5, 6};
    int suma = 0;

    for (int i = 0; i < 6; i++) {
        suma = suma + numeros[i];
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
