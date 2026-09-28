#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    int pipefd[2];
    pipe(pipefd);

    pid_t pid = fork();

    if (pid == 0) {

        // HIJO
        close(pipefd[1]);

        char mensaje[100];

        read(pipefd[0], mensaje, sizeof(mensaje));

        cout << "HIJO recibio: " << mensaje << endl;

        close(pipefd[0]);

    } else {

        // PADRE
        close(pipefd[0]);

        char mensaje[] = "Hola hijo";

        write(pipefd[1], mensaje, sizeof(mensaje));

        cout << "PADRE envio el mensaje" << endl;

        close(pipefd[1]);
    }

    return 0;
}
