// #include <iostream>
#include<iostream>
using namespace std;

int main() {
    unsigned int a = 5;  // binary: 0101
    unsigned int b = 9;  // binary: 1001

    cout << "a & b = " << (a & b) << endl;  // 0001 = 1
    cout << "a | b = " << (a | b) << endl;  // 1101 = 13
    cout << "a ^ b = " << (a ^ b) << endl;  // 1100 = 12
    cout << "~a = " << (~a) << endl;         // bitwise NOT
    cout << "b << 1 = " << (b << 1) << endl; // left shift = 18
    cout << "b >> 2 = " << (b >> 2) << endl; // right shift = 2

    return 0;
}
