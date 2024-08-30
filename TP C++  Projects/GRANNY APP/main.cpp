#include <iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class GRANNY_ACCOUNT{
private:
    double balance;
    string username;
    string password;
public:
    double m;
    GRANNY_ACCOUNT();
    void set_balance(double b);
    void set_username(string u);
    void set_password(string p);
    double get_balance();
    string get_username();
    string get_password();
    void log();
    void reg();
    string username_container;
    string password_container;
    string user;
    string pass;
    int opt;
    void main_menu();
    void withdraw();
    void view_balance();
    double amount;


};

GRANNY_ACCOUNT::GRANNY_ACCOUNT()
{
    m = 2000;
    set_balance(m);

}



void GRANNY_ACCOUNT::set_balance(double b)
{
        balance =b;
}

void GRANNY_ACCOUNT::set_username(string u)
{
    username = u;
}

void GRANNY_ACCOUNT::set_password(string p)
{
    password = p;
}

double GRANNY_ACCOUNT::get_balance()
{
    return balance;
}

string GRANNY_ACCOUNT::get_username()
{
    return username;
}

string GRANNY_ACCOUNT::get_password()
{
    return password;
}

void GRANNY_ACCOUNT::reg()
{
    cout<<setw(60)<<"CREATING USER PROFILE"<<endl;
    cout<<endl;
    ofstream create("DATA.txt", ios::app);
    cout<<"CREATE USERNAME: ";
    cin>>username_container;
    set_username(username_container);
    cout<<"CREATE PASSWORD: ";
    cin>>password_container;
    set_password(password_container);

    create<<get_username()<<' '<<get_password()<<endl;
}



void GRANNY_ACCOUNT::log()
{
    cout<<setw(60)<<"USER LOGIN"<<endl;
    ifstream login("DATA.txt");
    cout<<"ENTER USERNAME: ";
    cin>>user;
    cout<<"ENTER PASSWORD: ";
    cin>>pass;

    bool check = false;

    while(login>>username_container>>password_container){
        if(username_container == user && password_container == pass){
            check = true;
            main_menu();
            break;
        }

    }
    login.close();
    if(!check){
        cout<<"INVALID USERNAME OR PASSWORD"<<endl;
    }

}



void GRANNY_ACCOUNT::main_menu()
{
    while(true){
    cout<<endl;
    cout<<"1. WITHDRAW"<<endl;
    cout<<"2. VIEW BALANCE"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT AN OPTION: ";
    cin>>opt;
    switch(opt){
    case 1:
        withdraw();
        break;
    case 2:
        view_balance();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;
    }
}
}

void GRANNY_ACCOUNT::withdraw()
{
   cout<<"HOW MUCH DO YOU WANT TO WITHDRAW: ";
   cin>>amount;
   m -=amount;
   cout<<endl;
   if(amount>m){
    cout<<"YOU CAN'T WITHDRAW MORE THAN WHAT YOU HAVE"<<endl;
   }else{
         cout<<"YOUR BALANCE IS: "<<" R "<<m<<endl;
   }





}

void GRANNY_ACCOUNT::view_balance()
{
    cout<<"BALANCE: "<<" R "<<m<<endl;
}



int main()
{
    GRANNY_ACCOUNT GRAN;

    while(true){
    int option;
    cout<<setw(60)<<"WELCOME TO THE APP"<<endl;
    cout<<endl;
    cout<<"1. LOGIN"<<endl;
    cout<<"2. REGISTER"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT AN OPTION: ";
    cin>>option;
    switch(option){
    case 1:
        GRAN.log();
        break;
    case 2:
        GRAN.reg();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }

    }
    return 0;
}
