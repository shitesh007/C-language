// Student Performance Analyzer
#include <iostream>
#include <string>
using namespace std;

// Function declarations
float average(int marks[], int n);       // Calculate average for n subjects
float average(int m1, int m2, int m3);  // Overloaded function for 3 subjects

char grade(float avg);                   // Function to return grade based on average
void printReport(string name, int marks[], int n, float avg, char grd); // Print report card

int main() {
    int nStudents, nSubjects;

    cout << "Enter number of students: ";
    cin >> nStudents;

    cout << "Enter number of subjects per student (3 or 5): ";
    cin >> nSubjects;

    string names[100];
    int marks[100][5];   // max 5 subjects
    float averages[100];
    char grades[100];

    // Input student data
    for (int i = 0; i < nStudents; i++) {
        cin.ignore();  // clear input buffer
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, names[i]);

        cout << "Enter marks for " << nSubjects << " subjects:\n";
        for (int j = 0; j < nSubjects; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }

        // Calculate average using overloaded function
        if (nSubjects == 3) {
            averages[i] = average(marks[i][0], marks[i][1], marks[i][2]);
        } else {
            averages[i] = average(marks[i], nSubjects);
        }

        // Calculate grade
        grades[i] = grade(averages[i]);
    }

    // Find topper index
    int topperIndex = 0;
    for (int i = 1; i < nStudents; i++) {
        if (averages[i] > averages[topperIndex]) {
            topperIndex = i;
        }
    }

    // Print reports
    cout << "\n\n=== Student Report Cards ===\n";
    for (int i = 0; i < nStudents; i++) {
        printReport(names[i], marks[i], nSubjects, averages[i], grades[i]);
    }

    cout << "\nTopper: " << names[topperIndex] << " with average " << averages[topperIndex] << endl;

    return 0;
}

// Function definitions

// Average for array of marks
float average(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum / (float)n;
}

// Overloaded average for exactly 3 marks
float average(int m1, int m2, int m3) {
    return (m1 + m2 + m3) / 3.0;
}

// Grade based on average
char grade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

// Print student report card
void printReport(string name, int marks[], int n, float avg, char grd) {
    cout << "\nName: " << name << "\nMarks: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "\nAverage: " << avg;
    cout << "\nGrade: " << grd << endl;
    cout << "---------------------------\n";
}
