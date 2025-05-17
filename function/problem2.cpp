// Function to return largest of three

#include <iostream>
using namespace std;


int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << "Largest: " << largest(x, y, z) << endl;
    return 0;
}
