#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Mamzo{
    public:
    string username,password,user,pass;
    double price;
    int choice;
    int number;
    void log();
    void reg();
    void main_manu();
    void Kota(){};
    void Plates(){};
    void Chips(){};


};
void Mamzo::main_manu(){
    cout<<setw(60)<<"FOOD CATEGORIES"<<endl;
    cout<<endl;
    cout<<"1. KOTAS"<<endl;
    cout<<"2. PLATE"<<endl;
    cout<<"3. CHIPS"<<endl;
    cout<<"4. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>choice;
    switch(choice){
    case 1:
        Kota();
        break;
    case 2:
        Plates();
        break;
    case 3:
        Chips();
        break;
    case 4:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }





}


void Mamzo::reg(){
    cout<<setw(60)<<"REGISTER YOUR PROFILE"<<endl;
    ofstream create("DATA.txt",ios::app);

    cout<<"Create Username: ";
    cin>>username;
    cout<<"Create Password: ";
    cin>>password;

    create<<username<<' '<<password<<endl;
    cout<<endl;

    cout<<"ACCOUNT CREATED"<<endl;

}

void Mamzo::log(){


    cout<<"Enter Username: ";
    cin>>user;
    cout<<"Enter Password: ";
    cin>>pass;

    ifstream login("DATA.txt");

    bool confirm = false;


     while(login>>username>>password){

        if(user==username && pass == password){

            confirm = true;
            main_manu();
            break;

        }


    }
    login.close();
    if(!confirm){
        cout<<"INVALID INPUT OR PASSWORD"<<endl;
    }
}








int main()
{
    int option;
    Mamzo Customer;
while(true){

    cout<<setw(60)<<"WELCOME TO MAMZO KOTA STORE"<<endl;
    cout<<endl;
    cout<<"1. LOGIN "<<endl;
    cout<<"2. REGISTER"<<endl;
    cout<<"3. EXIT "<<endl;
    cout<<endl;
    cout<<"SELECT AN OPTION: ";
    cin>>option;
    switch(option){
    case 1:
        Customer.log();
        break;
    case 2:
        Customer.reg();
        break;
    case 3:
        return 0;
    default:
        cout<<"INVALID INPUT"<<endl;

    }

    }



    return 0;
}
