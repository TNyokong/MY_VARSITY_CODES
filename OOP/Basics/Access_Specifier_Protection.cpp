#include <iostream>
using namespace std;

class Employee
{
protected:
    int salary;
};

class programmer : public Employee
{
public:
    int bonus;
    void set_salary(int s)
    {
        salary = s;
    }
    int get_salary()
    {
        return salary;
    }
};

int main()
{
    programmer Thapelo;
    Thapelo.set_salary(200000);
    Thapelo.bonus = 50000;

    cout << Thapelo.get_salary();
    cout << Thapelo.bonus;

    return 0;
    
}