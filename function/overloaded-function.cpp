#include <iostream>
using namespace std;

// Function to calculate area of square
int area(int side) {
    return side * side;
}

// Overloaded function to calculate area of rectangle
int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int s = 5, l = 4, b = 6;

    cout << "Area of square: " << area(s) << endl;
    cout << "Area of rectangle: " << area(l, b) << endl;

    return 0;
}
