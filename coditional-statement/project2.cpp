// Simple Banking ATM Simulator
#include <iostream>
using namespace std;

int main() {
    double balance;
    int choice;
    double amount;

    cout << "Enter your initial account balance: ";
    cin >> balance;

    do {
        cout << "\n--- ATM Menu ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:  // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;  // Assignment operator
                cout << "Amount deposited successfully.\n";
                break;

            case 2:  // Withdraw
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance) {   // Conditional check
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                } else {
                    cout << "Insufficient balance!\n";
                }
                break;

            case 3:  // Check balance
                cout << "Your current balance is: " << balance << endl;
                break;

            case 4:
                cout << "Thank you for using our ATM.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
