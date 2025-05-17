#include <iostream>
using namespace std;

int main() {
    cout << "break example: Print numbers 1 to 5 but stop at 3\n";
    for (int i = 1; i <= 5; i++) {
        if (i == 4) {
            break;  // loop yahan stop ho jayega jab i 4 hoga
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
