// Single-dimensional Array
#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print all elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
