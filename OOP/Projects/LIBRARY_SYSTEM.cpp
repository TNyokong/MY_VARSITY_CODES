/*Library Management System: Create a program that manages a library's inventory.
You can have classes for books, users, transactions, etc. Implement features like
borrowing, returning, searching for books, and managing user accounts*/

#include <iostream>
#include <Iomanip>
#include <fstream>
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
    void search();
    void returning();
    void manage_users();
    void fiction();
    void Non_fiction();
    void Buka();
};

int main();
char decision;

void books::Buka(){
cout<<"Woud you like to borrow another book(Y-yes, N-No): ";
    cin>>decision;
    if(decision == 'Y'){
        borrowing();
    }else if(decision=='N'){
        cout<<"ENJOY!";
        exit(0);
    }else{
        cout<<"INVALID INPUT"<<endl;
        Buka();
        
    }
}


void books::fiction(){
    cout<<"Thank you for borrowing our book"<<endl;
    Buka();
    
}

void books::Non_fiction(){
    cout<<"Thank you for borrowing our book"<<endl;
    Buka();
}




int book;


void books::borrowing()
{
    cout<<setw(60)<<"THE BOOK CATALOG"<<endl;
    cout<<endl;
    cout<<"1. FICTION"<<endl;
    cout<<"2. NON-FICTION"<<endl;
    cout<<"3. RETURN TO THE PREVIOUS PAGE"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"WHICH BOOK WOULD YOU LOKE TO BORROW: ";
    cin>>book;

    switch(book){
        case 1:
            fiction();
            break;
        case 2: 
            Non_fiction();
            break;
        case 3:
            main();
            break;
        case 0:
            exit(0);

    }
}


void books::search()
{
}
void books::returning()
{
}
void books::manage_users()
{
}

void books::set_Title(string t)
{
    Title = t;
}
void books::set_Author(string a)
{
    Author = a;
}

void books::set_Availabily(bool V)
{
    is_Available = V;
}
string books::get_Title()
{
    return Title;
}
string books::get_Author()
{
    return Author;
}
bool books::get_is_Available()
{
    return is_Available;
}

class users : protected books
{
public:
    void set_user_name(string n);
    void set_user_number(int d);
    string get_user_name();
    int get_user_number();
};

void users::set_user_name(string n)
{
    user_name = n;
}
void users::set_user_number(int d)
{
    user_number = d;
}
string users::get_user_name()
{
    return user_name;
}
int users::get_user_number()
{
    return user_number;
}

class transaction : public users
{
public:
    void set_borrow_price(double p);
    double get_borrow_price();
};

void transaction::set_borrow_price(double p)
{
    borrow_price = p;
}
double transaction::get_borrow_price()
{
    return borrow_price;
}

int main()
{
    books VUT_Library;

    while (true)
    {
        cout << setw(60) << "WELCOME TO THE LIBRARY SOFTWARE" << endl;
        cout << endl;
        int option;
        cout << "1. BORROWING " << endl;
        cout << "2. SEARCHING " << endl;
        cout << "3. RETURNING " << endl;
        cout << "4. MANAGING USERS" << endl;
        cout << "0. EXIT" << endl;

        cout << "SELECT AN OPTION: ";
        cin >> option;
        switch (option)
        {
        case 1:
            VUT_Library.borrowing();
            break;
        case 2:
            VUT_Library.search();
            break;
        case 3:
            VUT_Library.returning();
            break;
        case 4:
            VUT_Library.manage_users();
            break;
        case 0:
            exit(0);
        default:
            cout << "INVALID INPUT" << endl;
        }
    }
}