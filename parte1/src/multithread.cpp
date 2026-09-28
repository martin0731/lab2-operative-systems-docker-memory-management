#include <iostream>
#include <pthread.h>

using namespace std;

void* funcionHilo(void* arg) {
    cout << "Hola desde el hilo creado" << endl;
    return NULL;
}
int main() {

    pthread_t hilo;

    cout << "Hola desde el hilo principal" << endl;

    pthread_create(&hilo, NULL, funcionHilo, NULL);

    pthread_join(hilo, NULL);

    cout << "El hilo termino" << endl;
    return 0;
}
