// Basic Electricity Bill Calculator
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;
    char again;
    string name;
    int day, month, year;

    do {
        // User name
        cout << "\n--- Electricity Bill Generator ---\n";
        cout << "Enter your name: ";
        getline(cin,name);

        // Manual Date Input
        cout << "Enter today's date (DD MM YYYY): ";
        cin >> day >> month >> year;

        // Units consumed
        cout << "Enter total electricity units consumed: ";
        cin >> units;

        // Bill calculation using conditional statements
        if (units <= 100) {
            bill = units * 1.5;
        }
        else if (units <= 200) {
            bill = (100 * 1.5) + (units - 100) * 2.5;
        }
        else if (units <= 300) {
            bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
        }
        else {
            bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 6;
        }

        // Final Receipt
        cout << "\n========== Electricity Bill Receipt ==========\n";
        cout << "Name            : " << name << endl;
        cout << "Date            : " << day << "/" << month << "/" << year << endl;
        cout << "Units Consumed  : " << units << " units" << endl;
        cout << "Total Bill      : ₹" << bill << endl;
        cout << "==============================================" << endl;

        // Ask user for another bill
        cout << "\nDo you want to generate another bill? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
