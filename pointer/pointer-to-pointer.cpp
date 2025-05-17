#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;       // Pointer to var
    int** ptr2 = &ptr;     // Pointer to pointer ptr

    cout << "Value of var: " << var << endl;
    cout << "Value via ptr: " << *ptr << endl;
    cout << "Value via ptr2: " << **ptr2 << endl;

    // Modify var using pointer to pointer
    **ptr2 = 20;

    cout << "New value of var after modification: " << var << endl;

    return 0;
}
