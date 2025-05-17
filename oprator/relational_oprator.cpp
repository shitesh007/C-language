// . Relational Operators (==, !=, <, >, <=, >=)

#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    cout << (x == y) << endl;  // 0 (false)
    cout << (x != y) << endl;  // 1 (true)
    cout << (x < y) << endl;   // 1 (true)
    cout << (x > y) << endl;   // 0 (false)
    cout << (x <= 5) << endl;  // 1 (true)
    cout << (y >= 10) << endl; // 1 (true)
    return 0;
}