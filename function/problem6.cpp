// Overloaded Display Function
#include <iostream>
using namespace std;

// Display integer
void display(int x) {
    cout << "Integer: " << x << endl;
}

// Display double
void display(double y) {
    cout << "Double: " << y << endl;
}

// Display string
void display(string z) {
    cout << "String: " << z << endl;
}

int main() {
    display(100);
    display(3.14);
    display("Hello, world!");
    return 0;
}
