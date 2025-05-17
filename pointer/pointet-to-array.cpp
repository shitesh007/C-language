#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int* ptr = arr;  // Pointer to the first element

    cout << "Array elements in reverse order:\n";
    // Access elements using pointer arithmetic starting from the end
    for (int i = 4; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
