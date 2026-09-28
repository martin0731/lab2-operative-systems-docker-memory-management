#include <iostream>
#include <unistd.h>

using namespace std;

int factorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {

    int n1, n2;

    cout << "Ingrese n1: ";
    cin >> n1;

    cout << "Ingrese n2: ";
    cin >> n2;

    pid_t pid = fork();

    if (pid == 0) {

        // HIJO
        cout << "HIJO - Factorial de " << n1
             << " = " << factorial(n1) << endl;

    } else {

        // PADRE
        cout << "PADRE - Factorial de " << n2
             << " = " << factorial(n2) << endl;
    }

    return 0;
}
