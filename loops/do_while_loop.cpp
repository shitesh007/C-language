#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // do-while loop: pehle body execute hoti hai, phir condition check hoti hai
    cout << "do-while loop example: Print numbers 1 to 5\n";
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;
    return 0;
}
