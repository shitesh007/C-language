// cube of a number
#include <iostream>
using namespace std;

// Function to return cube
int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube: " << cube(num) << endl;
    return 0;
}
