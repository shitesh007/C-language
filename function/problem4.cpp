
// Function to return average

#include <iostream>
using namespace std;


float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int m1, m2, m3;
    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    cout << "Average = " << average(m1, m2, m3) << endl;
    return 0;
}
