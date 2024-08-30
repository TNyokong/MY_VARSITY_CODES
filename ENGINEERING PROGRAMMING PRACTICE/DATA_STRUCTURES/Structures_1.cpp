#include <iostream>
#include <iomanip>
using namespace std;

struct Customer
{
    string name;
    int number;
    int quantity;
    double price;
    double total;
};

int main()
{
    Customer info[4];
    int information;
    char Y;

    cout << endl;
    cout << setw(60) << "Would you like to use our CUSTOMER ASSESSMENT SOFTWATE:  ";
    cin >> Y;

    while (Y == 'Y')
    {
        cout << endl;
        cout << setw(50) << "WELCOME TO THE CUSTOMER ASSESSMENT SOFTWARE" << endl;
        cout << endl;

        cout << "Pick a customer: ";
        cin >> information;

        switch (information)
        {

        case 1:
            cout << "Enter 1st customer name: ";
            cin >> info[0].name;
            cout << "Enter the Customer's purchace number: ";
            cin >> info[0].number;
            cout << "Enter the quantity of the customer's T-shirts purchase: ";
            cin >> info[0].quantity;
            cout << "Enter the price of each T-shirt: ";
            cin >> info[0].price;
            cout << "This is customer number 1, the following is their details: ";
            cout << endl;
            cout << "Customer Name: " << info[0].name << endl;
            cout << "Customer Number: " << info[0].number << endl;
            info[0].total = info[0].price * info[0].quantity;
            cout << "Total Number of T-shirts: " << info[0].quantity << endl;
            cout << "The price of each T-shirt: "
                 << "R" << info[0].price << endl;
            cout << "The customer should Pay: "
                 << "R" << info[0].total << endl;
            cout << endl;
            break;

        case 2:
            cout << "Enter 2nd customer name: ";
            cin >> info[1].name;
            cout << "Enter the Customer's purchace number: ";
            cin >> info[1].number;
            cout << "Enter the quantity of the customer's T-shirts purchase: ";
            cin >> info[1].quantity;
            cout << "Enter the price of each T-shirt: ";
            cin >> info[1].price;
            cout << "This is customer number 2, the following is their details: ";
            cout << endl;
            cout << "Customer Name: " << info[1].name << endl;
            cout << "Customer Number: " << info[1].number << endl;
            info[1].total = info[1].price * info[1].quantity;
            cout << "Total Number of T-shirts: " << info[1].quantity << endl;
            cout << "The price of each T-shirt: "
                 << "R" << info[1].price << endl;
            cout << "The customer should Pay: "
                 << "R" << info[1].total << endl;
            cout << endl;
            break;

        case 3:
            cout << "Enter 3rd customer name: ";
            cin >> info[2].name;
            cout << "Enter the Customer's purchace number: ";
            cin >> info[2].number;
            cout << "Enter the quantity of the customer's T-shirts purchase: ";
            cin >> info[2].quantity;
            cout << "Enter the price of each T-shirt: ";
            cin >> info[2].price;
            cout << "This is customer number 3, the following is their details: ";
            cout << endl;
            cout << "Customer Name: " << info[2].name << endl;
            cout << "Customer Number: " << info[2].number << endl;
            info[2].total = info[2].price * info[2].quantity;
            cout << "Total Number of T-shirts: " << info[2].quantity << endl;
            cout << "The price of each T-shirt: "
                 << "R" << info[2].price << endl;
            cout << "The customer should Pay: "
                 << "R" << info[2].total << endl;
            cout << endl;
            break;

        case 4:
            cout << "Enter 4th customer name: ";
            cin >> info[3].name;
            cout << "Enter the Customer's purchace number: ";
            cin >> info[3].number;
            cout << "Enter the quantity of the customer's T-shirts purchase: ";
            cin >> info[3].quantity;
            cout << "Enter the price of each T-shirt: ";
            cin >> info[3].price;
            cout << "This is customer number 4, the following is their details: ";
            cout << endl;
            cout << "Customer Name: " << info[3].name << endl;
            cout << "Customer Number: " << info[3].number << endl;
            info[3].total = info[3].price * info[3].quantity;
            cout << "Total Number of T-shirts: " << info[3].quantity << endl;
            cout << "The price of each T-shirt: "
                 << "R" << info[3].price << endl;
            cout << "The customer should Pay: "
                 << "R" << info[3].total << endl;
            cout << endl;
            break;

        default:
            cout << "Customer does not exist!" << endl;
        }
    }
}