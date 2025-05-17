// Number Analyzer Using Only Operators and I/O
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Arithmetic
    cout << "\nSum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Quotient = " << (b != 0) * (a / (b + (b==0))) << endl; // Avoid divide by zero, gives 0 if b=0
    cout << "Remainder = " << (b != 0) * (a % (b + (b==0))) << endl;

    // Bada number (using ternary operator)
    int max = (a > b) ? a : b;
    cout << "Greater number = " << max << endl;

    // Even check (using logical and modulus)
    cout << "Are both even? " << ((a % 2 == 0) && (b % 2 == 0)) << endl;

    // Parity of first number using ternary operator
    cout << "First number is " << ((a % 2 == 0) ? "Even" : "Odd") << endl;

    // Bitwise operations
    cout << "Bitwise AND = " << (a & b) << endl;
    cout << "Bitwise OR = " << (a | b) << endl;
    cout << "Bitwise XOR = " << (a ^ b) << endl;

    // Increment/decrement (show pre/post)
    cout << "a post-increment = " << a++ << endl;
    cout << "a after post-increment = " << a << endl;
    cout << "b pre-decrement = " << --b << endl;

    // Assignment operators
    a += 5;
    b *= 2;
    cout << "a after adding 5 = " << a << endl;
    cout << "b after multiplying by 2 = " << b << endl;

    return 0;
}
