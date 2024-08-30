#include<iostream>
#include<iomanip>
using namespace std;
class SUPERMARKET{
    private:
    string name;
    int Emp_num;
    string position;
    double hourly_rate;
    int hours_worked;

    public:
    void set_name(string n);
    void set_Emp_num(int e);
    void set_position(string p);
    void set_hourly_rate(double h);
    void set_hours_worked(int w);
    string get_name();
    int get_Emp_number();
    string get_position();
    double get_hourly_rate();
    int get_hours_worked();
    void salary();
    void profile();
    void cleaner();
    void manager();
    void security();
    void cashier();                                                               
};

int opt;

void SUPERMARKET::set_name(string n){
    name = n;
}
void SUPERMARKET::set_Emp_num(int e){
    Emp_num = e;
}
void SUPERMARKET::set_position(string p){
    position = p;
}
void SUPERMARKET::set_hourly_rate(double h){
    hourly_rate = h;
}
void SUPERMARKET::set_hours_worked(int w){
    hours_worked = w;
}

string SUPERMARKET::get_name(){
    return name;
}
int SUPERMARKET::get_Emp_number(){
    return Emp_num;
}
string SUPERMARKET::get_position(){
    return position;
}
double SUPERMARKET::get_hourly_rate(){
    return hourly_rate;
}
int SUPERMARKET::get_hours_worked(){
    return hours_worked;
}

void SUPERMARKET::cashier(){
    cout<<"1. View Employee Profile"<<endl;
    cout<<"2. Calaculate Employee Salary"<<endl;
    cout<<"0. EXIT THE PROGRAM"<<endl;
    cout<<"select an option: ";
    cin>>opt;
    switch(opt){
        case 0:
        cout<<"Thank you for using the program, goodbye"<<endl;
        case 1: 
        profile();
        break;
        case 2:
        salary();
        break;
        default:
        cout<<"Invalid entry"<<endl;

    }

}
void SUPERMARKET::cleaner(){
    
}
void SUPERMARKET::manager(){
    
}
void SUPERMARKET::security(){
    
}

void SUPERMARKET::salary(){

}

void SUPERMARKET::profile(){

}




int main(){

    SUPERMARKET EMPLOYEE;
    int options;

    cout<<setw(60)<<"MY SUPERMARKET"<<endl;
    cout<<endl;
    cout<<"YOUR EMPLOYEES"<<endl;
    cout<<"1. CLEANERS"<<endl;
    cout<<"2. MANAGER"<<endl;
    cout<<"3. SECURITY"<<endl;
    cout<<"4. CASHIERS"<<endl;
    cout<<"0. EXIT THE PROGRAM"<<endl;


    cout<<"Select employee category: ";
    cin>>options;
    switch(options){
        case 0:
        cout<<"Thank you for using the Program, Goodbye"<<endl;
        return 0;

        case 1:
        EMPLOYEE.cleaner();
        break;

        case 2:
        EMPLOYEE.manager();
        break;

        case 3:
        EMPLOYEE.security();
        break;

        case 4:
        EMPLOYEE.cashier();

    }
    

}