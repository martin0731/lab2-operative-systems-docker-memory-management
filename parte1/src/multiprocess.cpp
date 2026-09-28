#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        //hijo
        cout << "Soy el proceso HIJO" << endl;
        cout << "Mi PID es: " << getpid() << endl;
        cout << "El PID de mi padre es: " << getppid() << endl;
    }
    else {
	//padre
        cout << "Soy el proceso PADRE" << endl;
        cout << "Mi PID es: " << getpid() << endl;
        cout << "El PID de mi hijo es: " << pid << endl;
    }
    return 0;
}
