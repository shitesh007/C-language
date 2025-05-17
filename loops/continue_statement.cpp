#include <iostream>
using namespace std;

int main() {
    cout << "continue example: Print numbers 1 to 5 but skip 3\n";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // 3 ko skip karega, baaki print karega
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
