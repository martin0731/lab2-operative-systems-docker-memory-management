#include <iostream>
#include <pthread.h>

using namespace std;

int numeros[3];

void* calcularFactorial(void* arg) {

    int indice = *(int*)arg;
    int n = numeros[indice];

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial de " << n
         << " = " << factorial << endl;
    return NULL;
}

int main() {

    cout << "Ingrese 3 numeros:" << endl;

    cin >> numeros[0];
    cin >> numeros[1];
    cin >> numeros[2];

    pthread_t hilos[3];

    int indices[3] = {0, 1, 2};
    for (int i = 0; i < 3; i++) {
        pthread_create(&hilos[i], NULL, calcularFactorial, &indices[i]);
    }
    for (int i = 0; i < 3; i++) {
        pthread_join(hilos[i], NULL);
    }
    return 0;
}
