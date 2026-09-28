#include <iostream>

using namespace std;

int main() {

    int variableStack = 20;

    int* variableHeap = new int(30);
    cout << "TEXT/CODE: " << (void*)&main << endl;
    cout << "STACK:     " << &variableStack << endl;
    cout << "HEAP:      " << variableHeap << endl;

    delete variableHeap;

    return 0;
}
