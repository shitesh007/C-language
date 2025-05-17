 // Pointer declaration:
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // Pointer declaration: 'p' stores address of int variable
    int* p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Pointer p holds address: " << p << endl;
    cout << "Value at address p points to: " << *p << endl;

    // Changing value of x using pointer
    *p = 20;
    cout << "New value of x after changing via pointer: " << x << endl;

    return 0;
}
