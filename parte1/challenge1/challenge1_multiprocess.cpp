#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    int numeros[] = {1, 2, 3, 4, 5, 6};
    int pipefd[2];

    pipe(pipefd);

    pid_t pid = fork();

    if (pid == 0) {

        close(pipefd[0]);
        int sumaHijo = 0;
        for (int i = 3; i < 6; i++) {
            sumaHijo += numeros[i];
        }

        write(pipefd[1], &sumaHijo, sizeof(sumaHijo));

        close(pipefd[1]);

    } else {

        close(pipefd[1]);
        int sumaPadre = 0;
        for (int i = 0; i < 3; i++) {
            sumaPadre += numeros[i];
        }

        int sumaHijo;

        read(pipefd[0], &sumaHijo, sizeof(sumaHijo));

        int sumaTotal = sumaPadre + sumaHijo;

        cout << "Suma padre: " << sumaPadre << endl;
        cout << "Suma hijo: " << sumaHijo << endl;
        cout << "Suma total: " << sumaTotal << endl;

        close(pipefd[0]);
    }

    return 0;
}
