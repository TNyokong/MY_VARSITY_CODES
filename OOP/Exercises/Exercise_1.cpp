/*Exercise 2: Bank Account Class- Create a class BankAccount that represents a bank account. The class
should have attributes for the account number and balance, as well as methods to deposit, withdraw,
and check the account balance*/

#include<iostream>
using namespace std;

class Bank_Account{
    private:
    int Account_Number;
    double balance;
    public:
    void deposit();
    void Withdraw();
    void set_Account_Number(int A){
        Account_Number=A;
    }
    int get_Account_Number(){
        return Account_Number;
    }
    void set_Balance(double b){
        balance = b;
    }
    double get_Balance(){
        return balance;
    }

};



int main() {
    Bank_Account Customer_1;
    Bank_Account Customer_2;
    Bank_Account Customer_3;

    Customer_1.set_Account_Number(254245478);
    Customer_2.set_Account_Number(254245471);
    Customer_3.set_Account_Number(254245470);

    cout<<Customer_1.get_Account_Number();

}