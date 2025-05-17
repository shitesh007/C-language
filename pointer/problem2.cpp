// pointer arithmetic to access elements

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int* ptr = arr;  // points to first element

    cout << "Array elements using pointer:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // pointer arithmetic to access elements
    }
    cout << endl;

    return 0;
}
