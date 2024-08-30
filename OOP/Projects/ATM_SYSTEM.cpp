// ATM SYSTEM

#include <iostream>
#include <iomanip>
using namespace std;

int main();
class ATM
{
public:
    ATM();
    double bal;
    double amount;
    void deposit();
    void withdraw();
    void check_balance();
};

int options;

ATM::ATM()
{
    cout << setw(60) << "WELCOME TO THE ATM" << endl;
    bal = 0;
}

void ATM::check_balance()
{
    cout << "OPTION 1: CHECK BALANCE" << endl;
    cout << "OPTION 2: PRINT STATEMENT" << endl;
    cout << endl;
    cout << "WHAT WOULD YOU LIKE TO DO: ";
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "Your balance is: " << bal << endl;
        break;
    case 2:
        cout << "Take your statement" << endl;
    }
}
void ATM::withdraw()
{
    cout << "How much would you like to withdraw: ";
    cin >> amount;
    if (amount > bal)
    {
        cout << "Insufficient funds" << endl;
    }
    else
    {
        bal -= amount;
        cout << "Your New Balance is: " << bal << endl;
    }
}
void ATM::deposit()
{
    cout << "How much would you like to deposit: ";
    cin >> amount;
    bal = +amount;
    cout << "Balance: " << bal << endl;
}

int main()
{
    ATM Customer;
    int options;

    while (true)
    {
        cout << "OPTION 1: DEPOSIT" << endl;
        cout << "OPTION 2: WITHDRAW" << endl;
        cout << "OPTION 3: CHECK BALANCE" << endl;
        cout << endl;
        cout << "SELECT AN OPTION: ";
        cin >> options;
        switch (options)
        {
        case 1:
            Customer.deposit();
            break;

        case 2:
            Customer.withdraw();
            break;
        case 3:
            Customer.check_balance();
            break;
        default:
            cout << "THERE'S NO SUCH OPTION(SELECT OPTION 1,2 OR 3)";
        }
    }
}
