#include <iostream>
using namespace std;

// Function declaration
int square(int n);  // Declared before main

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Function call
    int result = square(num);

    cout << "Square is: " << result << endl;
    return 0;
}

// Function definition
int square(int n) {
    return n * n;
}
