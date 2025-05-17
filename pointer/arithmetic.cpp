#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;  // points to arr[0]

    cout << "Pointer ptr points to value: " << *ptr << endl; // 10
    ptr++;  // move pointer to next int in array
    cout << "Pointer ptr now points to: " << *ptr << endl; // 20
    ptr++;
    cout << "Pointer ptr now points to: " << *ptr << endl; // 30

    return 0;
}
