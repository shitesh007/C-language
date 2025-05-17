//  Multi-dimensional Array (2D Array)
#include <iostream>
using namespace std;

int main() {
    // 2x3 matrix
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print matrix
    cout << "Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
