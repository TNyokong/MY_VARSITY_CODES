#include <iostream>
using namespace std;

//Use get & set methods to access private members of a class

class Employee{
    private:
    int salary;
    public:
    void setsalary(int s){
        salary = s;
    }
    int getsalary(){
        return salary;
    }
};


int main(){

Employee Thapelo;
    Thapelo.setsalary(2500);
    cout<<Thapelo.getsalary();

    return 0;
}