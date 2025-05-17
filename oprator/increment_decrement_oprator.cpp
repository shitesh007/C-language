//  Increment/Decrement Operators (++, --)
#include <iostream>
using namespace std;

int main() {
    int a = 5;

    cout << "a = " << a << endl;
    cout << "Post-increment a++ = " << a++ << endl; // prints 5, then a=6
    cout << "Now a = " << a << endl;

    cout << "Pre-increment ++a = " << ++a << endl;  // increments then prints 7

    cout << "Post-decrement a-- = " << a-- << endl; // prints 7, then a=6
    cout << "Now a = " << a << endl;

    cout << "Pre-decrement --a = " << --a << endl;  // decrements then prints 5

    return 0;
}
