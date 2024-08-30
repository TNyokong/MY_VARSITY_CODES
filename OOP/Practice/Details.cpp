#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;


class detail{

    public:
    string name;
    int ID;
    void display();
    void regista();
    void log();
};

void detail::display(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your ID: ";
    cin>>ID;

    cout<<"Your name is "<<name<<"and your ID number is "<<ID<<endl;
}

string user_name;
string password;


void detail::regista(){
    ofstream create("Info.txt",ios::app);
    cout<<"CREATE USERNAME: ";
    cin>>user_name;
    cout<<"CREATE PASSWORD: ";
    cin>>password;


    create<<user_name<<' '<<password<<endl;

    create.close();

}

void detail::log(){
    ifstream login("Info.txt");
    string password_container; string user_name_container;

    cout<<"Enter Username: ";
    cin>>user_name_container;
    cout<<"Enter password: ";
    cin>>password_container;

    while(login>>user_name>>password){
        if(user_name==user_name_container && password == password_container){
            display();
        }else{
            cout<<"Incorrent input, try again"<<endl;
        }

    }

    login.close();
    }


int main(){

    detail Information;
    int choice;

    while(true){
    cout<<setw(60)<<"WELCOME"<<endl;
    cout<<endl;
    cout<<"1. REGISTER: "<<endl;
    cout<<"2. LOGIN"<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>choice;
    switch(choice){
        case 1: 
            Information.regista();
            break;
        case 2:
            Information.log();
            break;
           
    }



    }

}