#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Store{


    public:
    int number;
    double chicken_salad_price;
    double steak_rice_price;
    double stew_rice_price;
    double pancake_price;
    double french_toast_price;
    double omelette_price;
    double cheese_burgur_price;
    double Omelette_toast_price;
    double Wors_hotdog_price;
    Store();
    int option;
    string username;
    string password;
    string user;
    string pass;
    void reg();
    void log();
    void main_menu();
    void lunch();
    void breakfast();
    void supper();
    void pancake();
    void omelette();
    void french_toast();
    void chicken_salad();
    void steak_rice();
    void stew_rice();
    void cheese_burgur();
    void Omelette_toast();
    void Wors_hotdog();

};
Store::Store()
{
    pancake_price = 90;

    french_toast_price = 60;

    omelette_price = 45;

    chicken_salad_price = 70;
    steak_rice_price = 65;
    stew_rice_price = 80;

    cheese_burgur_price = 50;
    Omelette_toast_price = 35;
    Wors_hotdog_price = 40;

}


void Store::cheese_burgur()
{
    cout<<"How many cheese burgurs do you want: ";
    cin>>number;
    double pay = number*cheese_burgur_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}

void Store::Omelette_toast()
{
    cout<<"How many Omelette do you want: ";
    cin>>number;
    double pay = number*Omelette_toast_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}

void Store::Wors_hotdog()
{
   cout<<"How many hotdogs do you want: ";
    cin>>number;
    double pay = number*Wors_hotdog_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}


void Store::chicken_salad()
{
    cout<<"How many chicken salad plates do you want: ";
    cin>>number;
    double pay = number*chicken_salad_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}

void Store::steak_rice()
{
   cout<<"How many steak rice plates do you want: ";
   cin>>number;
   double pay = number*steak_rice_price;
   cout<<"Your bill is"<< " R " <<pay<<endl;
}

void Store::stew_rice()
{
   cout<<"How many stew rice plates do you want: ";
    cin>>number;
    double pay = number*stew_rice_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}



void Store::pancake()
{
    cout<<"How many Pancakes do you want: ";
    cin>>number;
    double pay = number*pancake_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}

void Store::omelette()
{
    cout<<"How many omelette do you want: ";
    cin>>number;
    double pay = number*omelette_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}



void Store::french_toast()
{
    cout<<"How many french toasts do you want: ";
    cin>>number;
    double pay = number*french_toast_price;
    cout<<"Your bill is"<< " R " <<pay<<endl;
}




void Store::breakfast()
{
    cout<<setw(60)<<"BREAKFAST OPTIONS"<<endl;
    cout<<endl;
    cout<<"1. PANCAKE     |  PRICE: R 90"<<endl;
    cout<<"2. OMELETTE    |  PRICE: R 45"<<endl;
    cout<<"3. FRENCH TOAST|  PRICE: R 60"<<endl;
    cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR FOOD: ";
    cin>>option;
    switch(option){
    case 1:
        pancake();
        break;
    case 2:
        omelette();
        break;
    case 3:
        french_toast();
        break;
    case 4:
        main_menu();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }

}

void Store::lunch()
{
    cout<<setw(60)<<"LUNCH OPTIONS"<<endl;
    cout<<endl;
    cout<<"1. OMELETTE TOAST   |  PRICE: R 50"<<endl;
    cout<<"2. CHEESE BUGGER    |  PRICE: R 35"<<endl;
    cout<<"3. WORS HOTDOG      |  PRICE: R 40"<<endl;
       cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR FOOD: ";
    cin>>option;
    switch(option){
    case 1:
        Omelette_toast();
        break;
    case 2:
        cheese_burgur();
        break;
    case 3:
        Wors_hotdog();
        break;
    case 4:
        main_menu();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }


}

void Store::supper()
{
    cout<<setw(60)<<"SUPPER OPTIONS"<<endl;
    cout<<endl;
    cout<<"1. CHICKED SALAD     |  PRICE: R 70"<<endl;
    cout<<"2. RICE WITH STEAK   |  PRICE: R 65"<<endl;
    cout<<"3. RICE WITH STEW    |  PRICE: R 80"<<endl;
    cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR FOOD: ";
    cin>>option;
    switch(option){
    case 1:
        chicken_salad();
        break;
    case 2:
        steak_rice();
        break;
    case 3:
        stew_rice();
        break;
    case 4:
        main_menu();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }


}


void Store::main_menu()
{
    cout<<setw(60)<<"WELCOME TO THE STORE"<<endl;
    cout<<endl;
    cout<<setw(55)<<"THIS IS OUR MANU"<<endl;
    cout<<"1. BREAKFAST"<<endl;
    cout<<"2. LUNCH"<<endl;
    cout<<"3. SUPPER"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT A CATEGORY: ";
    cin>>option;
    switch(option){
    case 1:
        breakfast();
        break;
    case 2:
        lunch();
        break;
    case 3:
        supper();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }



}


void Store::reg()
{
    ofstream create("MY_DATA.txt",ios::app);
    cout<<"Create Username: ";
    cin>>username;
    cout<<"Create Password: ";
    cin>>password;

    create<<username<<' '<<password<<endl;
    cout<<endl;
    cout<<"YOUR ACCOUNT IS CREATED"<<endl;
}

void Store::log()

{
  cout<<"Enter the Username: ";
  cin>>user;
  cout<<"Enter the Password: ";
  cin>>pass;

  ifstream login("MY_DATA.txt");

  bool pick = false;


  while(login>>username>>password){

    if(user==username && pass== password){

       pick = true;
       main_menu();
       break;




       }

    }
    login.close();
    if(!pick){
        cout<<"INVALID USERNAME OR PASSWORD"<<endl;
    }
}

int main()
{
    Store Customer;
    int options;

    while(true){
    cout<<setw(60)<<"WELCOME TO OUR STORE"<<endl;
    cout<<endl;
    cout<<"1. LOGIN "<<endl;
    cout<<"2. REGISTER"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT AN OPTION: ";
    cin>>options;
    switch(options){
    case 1:
        Customer.log();
        break;
    case 2:
        Customer.reg();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;


    }


    }

    return 0;
}
