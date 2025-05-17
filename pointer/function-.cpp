#include <iostream>
using namespace std;

// Function to return pointer to max element
int* findMax(int arr[], int n) {
    int* maxPtr = &arr[0];  // Assume first element is max
    for (int i = 1; i < n; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];  // Update max pointer
        }
    }
    return maxPtr;
}

int main() {
    int arr[5];

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int* maxElement = findMax(arr, 5);

    cout << "Maximum element is: " << *maxElement << endl;

    return 0;
}
