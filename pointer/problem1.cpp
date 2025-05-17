// Swap two numbers using pointers
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;  // Store value at a
    *a = *b;        // Put value at b into a
    *b = temp;      // Put temp (original a) into b
}

int main() {
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);  // Pass addresses of x and y
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
