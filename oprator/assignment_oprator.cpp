//  Assignment Operators (=, +=, -=, *=, /=, %=)
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    num += 5;  // num = num + 5
    cout << "After += 5: " << num << endl;

    num -= 3;  // num = num - 3
    cout << "After -= 3: " << num << endl;

    num *= 2;  // num = num * 2
    cout << "After *= 2: " << num << endl;

    num /= 4;  // num = num / 4
    cout << "After /= 4: " << num << endl;

    num %= 3;  // num = num % 3
    cout << "After %= 3: " << num << endl;

    return 0;
}
