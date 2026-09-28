#include <iostream>
#include <unistd.h>

using namespace std;

struct Mensaje {
    int id;
    char texto[100];
};

int main() {

    int pipefd[2];
    pipe(pipefd);

    pid_t pid = fork();

    if (pid == 0) {

        // HIJO
        close(pipefd[1]);

        Mensaje mensaje;

        read(pipefd[0], &mensaje, sizeof(mensaje));

        cout << "HIJO recibio:" << endl;
        cout << "ID: " << mensaje.id << endl;
        cout << "Mensaje: " << mensaje.texto << endl;

        close(pipefd[0]);

    } else {

        // PADRE
        close(pipefd[0]);

        Mensaje mensaje = {1, "Hola hijo desde el padre"};

        write(pipefd[1], &mensaje, sizeof(mensaje));

        cout << "PADRE envio el mensaje" << endl;

        close(pipefd[1]);
    }

    return 0;
}
