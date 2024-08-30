#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class Pension{
        public:
        double balance;
        double bal;
        void withdraw();
        void view();
        void reg();
        void log();
        Pension();
        void main_page();



};
string name;
string password;


void Pension::reg(){
ofstream create("Pension_details.txt");

cout<<"Create usersname: ";
cin>>name;
cout<<"Create Password: ";
cin>>password;

create<<name<<endl;
create<<password<<endl;

create.close();

}

void detai(){
    cout<<"Enter Username: ";
    cin>>name;
    cout<<"Enter Password: ";
    cin>>password;
}

bool log(){
    ifstream logo("Pension_details.txt");
    string username_container;
    string password_container;

    if(logo.is_open()){
        getline(logo,username_container);
        getline(logo,password_container);
    detai();
    


    logo.close();

    return(name ==username_container && password==password_container);
    }else{
        cout<<"DATA IS NOT FOUND"<<endl;
        return false; 
    }
}

Pension::Pension(){
    bal = 2000;
}

void Pension::withdraw(){
    cout<<"How much does Gogo want to withdraw: ";
    cin>>balance;
    if(balance>bal){
        cout<<"Insuficient funds"<<endl;
    }
    else{
    bal-=balance;
    cout<<"GOGO's BALANCE: "<<" R "<<bal<<endl;
    }
}


void Pension::view(){
    cout<<"GOGO's balance is: "<<" R "<<bal<<endl;
}

void Pension::main_page(){
    
    while(true){
    int option;
        cout<<"OPTION 1: Withdraw"<<endl;
        cout<<"OPTION 2: View Balance"<<endl;
        cout<<"Select an option: ";
        cin>>option;
        switch(option){
            case 1:
                withdraw();
                break;
            case 2:
                view();
                break;
            default:
                cout<<"Choose Option 1 or 2";
        }

    }

}



int main(){
    Pension GOGO;

    while(true){
    int option;
        cout<<setw(60)<<"WELCOME GOGO"<<endl;
        cout<<"OPTION 1: REGISTER"<<endl;
        cout<<"OPTION 2: LOGIN"<<endl;
        cout<<"Select an option: ";
        cin>>option;
        switch(option){
            case 1:
                GOGO.reg();
                break;
            case 2:
                if(log()){
                    GOGO.main_page();
                }else{
                    cout<<"Incorrect login details, try again"<<endl;
                    detai();
                }
                break;
            default:
                cout<<"Choose Option 1 or 2";
        }

    }

}
