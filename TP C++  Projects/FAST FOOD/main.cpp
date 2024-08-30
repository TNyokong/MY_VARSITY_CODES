#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;
int main();
class FOOD{
    private:
    int pin;

    public:
    double cost;
    double change;
    int randomPIN;
    int pin_container;
    double money;
    int opt;
    int option;
    void set_pin(double n);
    int get_pin();
    void breakfast();
    void lunch();
    void supper();
    void oats();
    void toast();
    void omlette();
    void chips();
    void kota();
    void plate();
    void chicken();
    void steak();
    void stew();
    void cash();
    void card();
    void PIN();
    void COSTS();


};




const double oats_price    = 30;
const double toast_price   = 50;
const double omlette_price = 65;
const double chips_price   = 30;
const double kota_price    = 25;
const double plate_price   = 65;
const double chicken_price = 30;
const double steak_price   = 50;
const double stew_price    = 65;







void FOOD::set_pin(double n)
{
    pin = n;
}


int FOOD::get_pin()
{
    return pin;
}


void FOOD::cash()
{
    cout<<endl;
    cout<<"INSERT THE CASH: ";
    cin>>money;
    change = money - cost;
    cout<<"Your change is: "<<" R "<<change<<endl;
    cout<<"ENJOY YOUR MEAL"<<endl;

}

void FOOD::PIN(){
    ofstream create("DATA.txt", ios::app);
        srand(0000);
        randomPIN = rand()% 9000 + 1000;

        create<<randomPIN<<endl;
    }



void FOOD::card()
{

    cout<<endl;
    ifstream access("DATA.txt");
    cout<<"INSERT YOUR PIN: ";
    cin>>pin_container;
    set_pin(pin_container);

    bool it = false;

    while(access>>randomPIN){
            if(pin_container ==randomPIN){
                it = true;
                cout<<"YOUR ORDER HAS BEEN PROCESSED"<<endl;
                break;
            }
    }
    access.close();
    if(!it){

        cout<<"Incorrect Pin"<<endl;

    }

}

void FOOD::breakfast()
{
    cout<<setw(60)<<"WELCOME TO THE BREAKFAST MENU"<<endl;
    cout<<endl;
    cout<<"DETAIL     | PRICE "<<endl;
    cout<<endl;
    cout<<"1. OATS    | R30 "<<endl;
    cout<<"2. TOAST   | R50 "<<endl;
    cout<<"3. OMLETTE | R65 "<<endl;
    cout<<endl;
    cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>opt;
    switch(opt){
    case 1:
        oats();
        break;
    case 2:
        toast();
        break;
    case 3:
        omlette();
        break;
    case 4:
        main();
        break;
    case 0:
        exit(0);
        break;
    default:
        cout<<"INAVALID INPUT"<<endl;
    }
}

void FOOD::lunch()
{
    cout<<setw(60)<<"WELCOME TO THE LUNCH MENU"<<endl;
    cout<<endl;
    cout<<"DETAIL     | PRICE "<<endl;
    cout<<endl;
    cout<<"1. CHIPS   | R30 "<<endl;
    cout<<"2. KOTA    | R25 "<<endl;
    cout<<"3. PLATE   | R65 "<<endl;
    cout<<endl;
    cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>opt;
    switch(opt){
    case 1:
        chips();
        break;
    case 2:
        kota();
        break;
    case 3:
        plate();
        break;
    case 4:
        main();
    case 0:
        exit(0);
    default:
        cout<<"INAVALID INPUT"<<endl;
    }
}

void FOOD::supper()
{
      cout<<setw(60)<<"WELCOME TO THE SUPPER MENU"<<endl;
    cout<<endl;
    cout<<"DETAIL     | PRICE "<<endl;
    cout<<endl;
    cout<<"1. CHICKEN | R30 "<<endl;
    cout<<"2. STEAK   | R50 "<<endl;
    cout<<"3. STEW    | R65 "<<endl;
    cout<<endl;
    cout<<"4. BACK"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>opt;
    switch(opt){
    case 1:
        chicken();
        break;
    case 2:
        steak();
        break;
    case 3:
        stew();
        break;
    case 4:
        main();
    case 0:
        exit(0);
    default:
        cout<<"INAVALID INPUT"<<endl;
    }
}

void FOOD::COSTS(){
    cout<<endl;
    cout<<"DO YOU PAY CASH OR CARD: ";
    cout<<endl;
    cout<<"1. CASH "<<endl;
    cout<<"2. CARD "<<endl;
    cout<<endl;
    cout<<"3. BACK"<<endl;
    cout<<"0. EXIT "<<endl;
    cout<<"SELECT AN OPTION: ";
    cin>>option;
    switch(option){
    case 1:
        cash();
        break;
    case 2:
        card();
        break;
    case 3:
        return;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;
    }


}

void FOOD::oats()
{
    cout<<"HOW MANY OATS MEAL DO YOU WANT: ";
    cin>>opt;
    cost = oats_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();



}

void FOOD::toast()
{
 cout<<"HOW MANY TOAST MEAL DO YOU WANT: ";
    cin>>opt;
    cost = toast_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::omlette()
{
 cout<<"HOW MANY OMLETTE MEAL DO YOU WANT: ";
    cin>>opt;
    cost = omlette_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::chips()
{
 cout<<"HOW MANY CHIPS MEAL DO YOU WANT: ";
    cin>>opt;
    cost = chips_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::kota()
{
 cout<<"HOW MANY KOTA MEAL DO YOU WANT: ";
    cin>>opt;
    cost = kota_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::plate()
{
 cout<<"HOW MANY PLATE MEAL DO YOU WANT: ";
    cin>>opt;
    cost = plate_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
   COSTS();
}

void FOOD::chicken()
{
 cout<<"HOW MANY CHICKEN MEAL DO YOU WANT: ";
    cin>>opt;
    cost = chicken_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::steak()
{
 cout<<"HOW MANY STEAK MEAL DO YOU WANT: ";
    cin>>opt;
    cost = steak_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}

void FOOD::stew()
{
 cout<<"HOW MANY OATS MEAL DO YOU WANT: ";
    cin>>opt;
    cost = stew_price*opt;
    cout<<"TOTAL COST: "<<" R " <<cost<<endl;
    cout<<endl;
    COSTS();
}



int main()
{
    FOOD FEED;
    FEED.PIN();
while(true){
    int options;
    cout<<setw(60)<<"WELCOME TO TP FAST FOOD"<<endl;
    cout<<setw(45)<<"CATEGORIES"<<endl;
    cout<<endl;
    cout<<"1. BREAKFAST "<<endl;
    cout<<"2. LUNCH "<<endl;
    cout<<"3. SUPPER "<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"SELECT YOUR OPTION: ";
    cin>>options;
    switch(options){
    case 1:
        FEED.breakfast();
        break;
    case 2:
        FEED.lunch();
        break;
    case 3:
        FEED.supper();
        break;
    case 0:
        exit(0);
    default:
        cout<<"INVALID INPUT"<<endl;

    }
}
    return 0;
}
