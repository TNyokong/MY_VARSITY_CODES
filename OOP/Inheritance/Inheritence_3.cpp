/*Create an Employee class with attributes like name and salary. Then, create subclasses for different
types of employees like Manager, Developer, and Salesperson. Each subclass should inherit from the
Employee class and can have additional attributes or methods specific to that type of employee.*/

#include <iostream>
#include <iomanip>
using namespace std;

class Employee{
    public:
    string name;
    double salary;
    int hours;
    float rate;
    Employee();
    char y;
};

Employee::Employee(){
    cout<<setw(60)<<"WELCOME TO THE EMPLOYEE CALCULATOR"<<endl;
}

class Manager:public Employee{
    public:
    double calc_salary();
};

double Manager::calc_salary(){
    return hours*rate;
}

class Developer:public Manager{

};
class Salesperson:public Manager{

};

int main(){
Salesperson January_Salary;
    

    cout<<"Enter Employee name: ";
    cin>>January_Salary.name;
    cout<<"Enter the hours they worked: ";
    cin>>January_Salary.hours;
    cout<<"Enter their hourly rate: ";
    cin>>January_Salary.rate;


    cout<<setw(60)<<"Here is the Employee Information"<<endl;
    cout<<endl;
    cout<<"Employee name: "<<January_Salary.name<<endl;
    cout<<"Hours worked: "<<" R "<<January_Salary.hours<<endl;
    cout<<"Hourly Rate: "<<" R "<<January_Salary.rate<<endl;
    cout<<"Employee January salary is: "<<" R "<<January_Salary.calc_salary()<<endl;
    
cout<<"Would you like to use the Employee Calculator again: ";
cin>>January_Salary.y;
if(January_Salary.y == 'y'){
    main();
}
}
