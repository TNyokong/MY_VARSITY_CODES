#include <iostream>
#include <fstream>
using namespace std;

string name;
string password;

void userdata() {
    ofstream profile("USER_DATA.txt");

    cout << "Enter username: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;

    profile << name << endl;
    profile << password << endl;

    profile.close();
}

bool validate() {
    ifstream login("USER_DATA.txt");
    string storedName, storedPassword;

    if (login.is_open()) {
        getline(login, storedName);
        getline(login, storedPassword);

        cout << "Enter username: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;

        login.close();

        return (name == storedName && password == storedPassword);
    } else {
        cout << "Error: USER_DATA.txt not found." << endl;
        return false;
    }
}

int main() {
    int choice;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        userdata();
    } else if (choice == 2) {
        if (validate()) {
            cout << "Login successful." << endl;
        } else {
            cout << "Login failed. Invalid username or password." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}