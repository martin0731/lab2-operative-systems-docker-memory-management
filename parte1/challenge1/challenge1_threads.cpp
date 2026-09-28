#include <iostream>
#include <pthread.h>

using namespace std;

int numeros[] = {1, 2, 3, 4, 5, 6};

int suma1 = 0;
int suma2 = 0;

void* sumarPrimeraMitad(void* arg) {

    for (int i = 0; i < 3; i++) {
        suma1 += numeros[i];
    }

    return NULL;
}

void* sumarSegundaMitad(void* arg) {

    for (int i = 3; i < 6; i++) {
        suma2 += numeros[i];
    }

    return NULL;
}

int main() {

    pthread_t hilo1;
    pthread_t hilo2;

    pthread_create(&hilo1, NULL, sumarPrimeraMitad, NULL);
    pthread_create(&hilo2, NULL, sumarSegundaMitad, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    int sumaTotal = suma1 + suma2;

    cout << "Suma hilo 1: " << suma1 << endl;
    cout << "Suma hilo 2: " << suma2 << endl;
    cout << "Suma total: " << sumaTotal << endl;

    return 0;
}
