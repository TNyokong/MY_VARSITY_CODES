#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

class Pension {
public:
    Pension();
    void withdraw(double amount);
    void viewBalance();
    void viewHistory();

private:
    double availableBalance;
    vector<string> transactionHistory;
};

Pension::Pension() {
    availableBalance = 2000;
}

void Pension::withdraw(double amount) {
    if (amount <= 0 || amount > availableBalance) {
        cout << "Invalid amount or insufficient funds" << endl;
    } else {
        availableBalance -= amount;
        string transaction = "Withdrawal: R " + to_string(amount);
        transactionHistory.push_back(transaction);
        cout << "GOGO's BALANCE: R " << availableBalance << endl;
    }
}

void Pension::viewBalance() {
    cout << "GOGO's balance is: R " << availableBalance << endl;
}

void Pension::viewHistory() {
    cout << "Transaction History:" << endl;
    for (const string& transaction : transactionHistory) {
        cout << "- " << transaction << endl;
    }
}

int main() {
    Pension GOGO;

    while (true) {
        int option;
        cout << "**********************************************************" << endl;
        cout << "*                    WELCOME GOGO                       *" << endl;
        cout << "**********************************************************" << endl;
        cout << "OPTION 1: Withdraw" << endl;
        cout << "OPTION 2: View Balance" << endl;
        cout << "OPTION 3: View Transaction History" << endl;
        cout << "OPTION 0: Exit" << endl;
        cout << "**********************************************************" << endl;
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            case 1:
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                GOGO.withdraw(amount);
                break;
            case 2:
                GOGO.viewBalance();
                break;
            case 3:
                GOGO.viewHistory();
                break;
            default:
                cout << "Choose Option 1, 2, 3, or 0" << endl;
        }
    }

    return 0;
}