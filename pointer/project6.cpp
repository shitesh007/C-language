#include <iostream>
#include <string>
using namespace std;

// Function to calculate average using pointers
float calculateAverage(int* marks, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(marks + i);
    }
    return sum / (float)n;
}

// Function to assign grade
char assignGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

// Function to print report
void printReport(string name, int* marks, int n, float avg, char grade, float attendance) {
    cout << "\n--------------------------------------\n";
    cout << "📄 Student Report: " << name << endl;
    cout << "Marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i);
        if (i < n - 1) cout << ", ";
    }
    cout << "\nAverage Marks: " << avg;
    cout << "\nGrade: " << grade;
    cout << "\nAttendance: " << attendance << "%";
    cout << "\nStatus: " << (attendance >= 75 ? "Regular" : "Irregular");
    cout << "\n--------------------------------------\n";
}

int main() {
    int nStudents, nSubjects;
    cout << "Enter number of students: ";
    cin >> nStudents;
    cout << "Enter number of subjects: ";
    cin >> nSubjects;

    // Safety limit
    if (nStudents > 50 || nSubjects > 10) {
        cout << "❌ Limit exceeded (Max 50 students, 10 subjects)\n";
        return 1;
    }

    string names[50];
    int marks[50][10];
    float attendance[50];

    float highestAvg = -1;
    int topperIndex = 0;

    float bestAttendance = -1;
    int regularIndex = 0;

    // Input
    for (int i = 0; i < nStudents; i++) {
        cin >> ws;
        cout << "\nEnter name of student " << (i + 1) << ": ";
        getline(cin, names[i]);

        cout << "Enter marks for " << nSubjects << " subjects:\n";
        for (int j = 0; j < nSubjects; j++) {
            cout << "Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
        }

        cout << "Enter attendance percentage (0–100): ";
        cin >> attendance[i];
    }

    // Analysis
    for (int i = 0; i < nStudents; i++) {
        float avg = calculateAverage(marks[i], nSubjects);
        char grd = assignGrade(avg);

        printReport(names[i], marks[i], nSubjects, avg, grd, attendance[i]);

        if (avg > highestAvg) {
            highestAvg = avg;
            topperIndex = i;
        }

        if (attendance[i] > bestAttendance) {
            bestAttendance = attendance[i];
            regularIndex = i;
        }
    }

    // Results
    cout << "\n🏆 Topper: " << names[topperIndex] << " with average " << highestAvg << endl;
    cout << "✔️ Most Regular Student: " << names[regularIndex] << " with attendance " << bestAttendance << "%" << endl;

    return 0;
}
