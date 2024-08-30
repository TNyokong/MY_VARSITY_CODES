//Creating a Class

#include <iostream>
using namespace std;

class Personal_Detail
{
public:
    string name;
    string Surname;
    int Age;
};

int main()
{
    Personal_Detail Employee_1;

    Employee_1.name = "Thapelo";
    Employee_1.Surname = "Nyokong";
    Employee_1.Age = 26;


    Personal_Detail Employee_2;

    Employee_2.name = "Thapelo";
    Employee_2.Surname = "Nyokong";
    Employee_2.Age = 28;

    Personal_Detail Employee_3;

    Employee_3.name = "Thapelo";
    Employee_3.Surname = "Nyokong";
    Employee_3.Age = 30;

cout<<Employee_2.Age;

}