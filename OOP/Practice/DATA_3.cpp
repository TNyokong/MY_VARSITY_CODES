#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main();
string name;
string password;

void regista()
{
    ofstream create("MY_INFO.txt");

    cout << "CREATE USERNAME: ";
    cin >> name;
    cout << "CREATE PASSWORD: ";
    cin >> password;

    create << name << endl;
    create << password << endl;

    create.close();

    main();
}

bool log()
{
    ifstream creat("MY_INFO.txt");
    string username_holder;
    string password_holder;

    if (creat.is_open())
    {
        getline(creat, username_holder);
        getline(creat, password_holder);

        cout << "ENTER YOUR USERNAME: ";
        cin >> name;
        cout << "ENTER YOUR PASSWORD: ";
        cin >> password;

        creat.close();

        return (name == username_holder && password == password_holder);
    }
    else
    {
        cout << "TEXT FILE NOT FOUND" << endl;
        return false;
    }
}

int main()
{
    int options;

    while (true)
    {

        cout << setw(60) << "WELCOME TO FACECOOK" << endl;
        cout << endl;
        cout << "1. REGISTER" << endl;
        cout << "2. LOGIN" << endl;
        cout << "0. EXIT" << endl;

        cout << "SELECT AN OPTION: ";
        cin >> options;
        switch (options)
        {
        case 1:
            regista();
            return 0;
        case 2:
             if (log()) {
            cout << "Login successful." << endl;
        } else {
            cout << "Login failed. Invalid username or password." << endl;
        }
        case 0:
            exit(0);
        default:
            cout << "INVALID INPUT" << endl;
        }
    }
}