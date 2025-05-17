// Logical Operators (&&, ||, !)
#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;

    cout << (a && b) << endl;  // Logical AND: 0 (false)
    cout << (a || b) << endl;  // Logical OR: 1 (true)
    cout << (!a) << endl;      // Logical NOT: 0 (false)
    return 0;
}

