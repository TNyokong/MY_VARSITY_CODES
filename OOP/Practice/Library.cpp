#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class books
{
private:
    string Title;
    string Author;
    bool is_Available;

protected:
    string user_name;
    int user_number;
    double borrow_price;

public:
    void set_Title(string t);
    void set_Author(string a);
    void set_Availabily(bool V);
    string get_Title();
    string get_Author();
    bool get_is_Available();
    void borrowing();
    void searchByTitle(const string& searchTerm);
    void returning();
    void manage_users();
    void fiction();
    void Non_fiction();
    void Buka();
    void saveToFile();
};

// Rest of the class definitions and main function...

void books::saveToFile() {
    ofstream outFile("books.txt", ios::app); // Open the file in append mode
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return;
    }
    outFile << Title << ',' << Author << ',' << is_Available << '\n';
    outFile.close();
}

void books::searchByTitle(const string& searchTerm) {
    ifstream inFile("books.txt");
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        string title, author;
        bool availability;

        getline(ss, title, ',');
        getline(ss, author, ',');
        ss >> availability;

        if (title.find(searchTerm) != string::npos) {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Availability: " << (availability ? "Available" : "Not Available") << endl;
            cout << endl;
        }
    }

    inFile.close();
}

int main() {
    books VUT_Library;

    while (true) {
        cout << setw(60) << "WELCOME TO THE LIBRARY SOFTWARE" << endl;
        cout << endl;
        int option;
        cout << "1. BORROWING " << endl;
        cout << "2. SEARCHING " << endl;
        // ...

        cout << "SELECT AN OPTION: ";
        cin >> option;
        switch (option) {
            // ...

            case 2:
                {
                    string searchTerm;
                    cout << "Enter the title to search for: ";
                    cin.ignore(); // Clear the newline character
                    getline(cin, searchTerm);
                    VUT_Library.searchByTitle(searchTerm);
                }
                break;
            
            // ...
        }
    }
}