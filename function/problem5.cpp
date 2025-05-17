//  Function Overloading – Area Calculation



#include <iostream>
using namespace std;

// Area of square
int area(int side) {
    return side * side;
}

// Area of rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Area of circle
double area(double radius) {
    return 3.1416 * radius * radius;
}

int main() {
    cout << "Area of square (side=5): " << area(5) << endl;
    cout << "Area of rectangle (4x6): " << area(4, 6) << endl;
    cout << "Area of circle (r=3.5): " << area(3.5) << endl;
    return 0;
}
