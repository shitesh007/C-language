#include <iostream>
using namespace std;

int main() {
    int i = 1;
    cout << "goto example: Print 1 to 5 using goto\n";

start:  // label
    cout << i << " ";
    i++;
    if (i <= 5) {
        goto start;  // jump to label start
    }
    cout << endl;
    return 0;
}
