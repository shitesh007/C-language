// Student Marks Report System (for multiple students)
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Declare arrays
    string names[100];          // Student names
    int marks[100][3];          // Marks for 3 subjects per student
    float percentage[100];      // Percentage
    char grade[100];            // Grade for each student

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << (i + 1) << ": ";
        cin.ignore(); // Clear input buffer
        getline(cin, names[i]);

        cout << "Enter marks for 3 subjects (out of 100):\n";
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
        }

        // Calculate percentage
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        percentage[i] = (total / 3.0); // average

        // Grade using conditional statements
        if (percentage[i] >= 90) grade[i] = 'A';
        else if (percentage[i] >= 75) grade[i] = 'B';
        else if (percentage[i] >= 60) grade[i] = 'C';
        else if (percentage[i] >= 40) grade[i] = 'D';
        else grade[i] = 'F';
    }

    // Output report
    cout << "\n===== Student Report Card =====\n";
    for (int i = 0; i < n; i++) {
        cout << "\nName       : " << names[i];
        cout << "\nMarks      : " << marks[i][0] << ", " << marks[i][1] << ", " << marks[i][2];
        cout << "\nPercentage : " << percentage[i] << "%";
        cout << "\nGrade      : " << grade[i];
        cout << "\n-----------------------------";
    }

    return 0;
}
