// Find the Largest Element in an Array

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {25, 45, 10, 99, 65};
    int max = arr[0]; // Assume first is max

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max
        }
    }

    cout << "Largest element: " << max << endl;
    return 0;
}
