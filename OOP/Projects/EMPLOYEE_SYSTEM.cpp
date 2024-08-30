#include <iostream>
#include <iomanip>
using namespace std;
class SUPERMARKET
{
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
    void Security_salary();
    void Security_profile();
    void cleaner_salary();
    void cleaner_profile();
    void manager_salary();
    void manager_profile();
    void cashier_salary();
    void cashier_profile();
    void cleaner();
    void manager();
    void security();
    void cashier();
    void calc();
};

int main();

int opt;

void SUPERMARKET::set_name(string n)
{
    name = n;
}
void SUPERMARKET::set_Emp_num(int e)
{
    Emp_num = e;
}
void SUPERMARKET::set_position(string p)
{
    position = p;
}
void SUPERMARKET::set_hourly_rate(double h)
{
    hourly_rate = h;
}
void SUPERMARKET::set_hours_worked(int w)
{
    hours_worked = w;
}

string SUPERMARKET::get_name()
{
    return name;
}
int SUPERMARKET::get_Emp_number()
{
    return Emp_num;
}
string SUPERMARKET::get_position()
{
    return position;
}
double SUPERMARKET::get_hourly_rate()
{
    return hourly_rate;
}
int SUPERMARKET::get_hours_worked()
{
    return hours_worked;
}

void SUPERMARKET::cashier()
{
    cout << "1. View Employee Profile" << endl;
    cout << "2. Calaculate Employee Salary" << endl;
    cout << "3. Return to the previous page" << endl;
    cout << "0. EXIT THE PROGRAM" << endl;
    cout << "select an option: ";
    cin >> opt;
    switch (opt)
    {
    case 0:
        cout << "Thank you for using the program, goodbye" << endl;
        exit(0);
    case 1:
        cashier_profile();
        break;
    case 2:
        cashier_salary();
        break;
    case 3:
        main();
  default:
        cout << "Invalid entry" << endl;
    }
}
void SUPERMARKET::cleaner()
{
    cout << "1. View Employee Profile" << endl;
    cout << "2. Calaculate Employee Salary" << endl;
    cout << "3. Return to the previous page" << endl;
    cout << "0. EXIT THE PROGRAM" << endl;
    cout << "select an option: ";
    cin >> opt;
    switch (opt)
    {
    case 0:
        cout << "Thank you for using the program, goodbye" << endl;
        exit(0);
    case 1:
        cleaner_profile();
        break;
    case 2:
        cleaner_salary();
        break;
    case 3:
        main();
    default:
        cout << "Invalid entry" << endl;
    }
}
void SUPERMARKET::manager()
{
    cout << "1. View Employee Profile" << endl;
    cout << "2. Calaculate Employee Salary" << endl;
    cout << "3. Return to the previous page" << endl;
    cout << "0. EXIT THE PROGRAM" << endl;
    cout << "select an option: ";
    cin >> opt;
    switch (opt)
    {
    case 0:
        cout << "Thank you for using the program, goodbye" << endl;
        exit(0);
    case 1:
        manager_profile();
        break;
    case 2:
        manager_salary();
        break;
    case 3:
        main();
    default:
        cout << "Invalid entry" << endl;
    }
}
void SUPERMARKET::security()
{
    cout << "1. View Employee Profile" << endl;
    cout << "2. Calaculate Employee Salary" << endl;
    cout << "3. Return to the previous page" << endl;
    cout << "0. EXIT THE PROGRAM" << endl;
    cout << "select an option: ";
    cin >> opt;
    switch (opt)
    {
    case 0:
        cout << "Thank you for using the program, goodbye" << endl;
        exit(0);
    case 1:
        Security_profile();
        break;
    case 2:
        Security_salary();
        break;
    case 3:
        main();
    default:
        cout << "Invalid entry" << endl;
    }
}

void SUPERMARKET::calc()
{
    int hour;
    double rat;
    double salary;
    cout << "ENTER HOURS WORKED: ";
    cin >> hour;
    set_hourly_rate(hour);
    cout << "ENTER HOURLY RATE: ";
    cin >> rat;
    set_hourly_rate(rat);
    salary = rat * hour;

    cout << "EMPLOYEE WORKED FOR :" << hour << " hours " << endl;
    cout << "EMPLOYEE HOURLY RATE IS :"
         << " R " << rat << " per hour " << endl;
    cout << "EMPLOYEE SALARY IS :"
         << " R " << salary << endl;
}

void SUPERMARKET::cashier_profile()
{
    cout << setw(30) << "CASHIER'S PROFILE" << endl;
    set_name("LINDIWE");
    set_position("CASHIER");
    set_Emp_num(5);
    cout << "NAME: " << get_name() << endl;
    cout << "POSITION: " << get_position() << endl;
    cout << "EMPLOYEE NUMBER: " << get_Emp_number() << endl;
}

void SUPERMARKET::cashier_salary()
{
    cout << setw(30) << "CALCULATE CASHIER'S SALARY" << endl;
    cout << endl;
    calc();
}
void SUPERMARKET::Security_profile()
{
    cout << setw(30) << "SECURITY'S PROFILE" << endl;
    set_name("DAVID");
    set_position("SECURITY");
    set_Emp_num(7);
    cout << "NAME: " << get_name() << endl;
    cout << "POSITION: " << get_position() << endl;
    cout << "EMPLOYEE NUMBER: " << get_Emp_number() << endl;
}

void SUPERMARKET::Security_salary()
{
    cout << setw(30) << "CALCULATE SECURITY'S SALARY" << endl;
    cout << endl;
    calc();
}
void SUPERMARKET::manager_profile()
{
    cout << setw(30) << "MANAGER'S PROFILE" << endl;
    set_name("JOHN");
    set_position("MANAGER");
    set_Emp_num(2);
    cout << "NAME: " << get_name() << endl;
    cout << "POSITION: " << get_position() << endl;
    cout << "EMPLOYEE NUMBER: " << get_Emp_number() << endl;
}

void SUPERMARKET::manager_salary()
{
    cout << setw(30) << "CALCULATE MANAGER'S SALARY" << endl;
    cout << endl;
    calc();
}
void SUPERMARKET::cleaner_profile()
{
    cout << setw(30) << "CLEANER'S PROFILE" << endl;
    set_name("LERATO");
    set_position("CLEANER");
    set_Emp_num(9);
    cout << "NAME: " << get_name() << endl;
    cout << "POSITION: " << get_position() << endl;
    cout << "EMPLOYEE NUMBER: " << get_Emp_number() << endl;
}

void SUPERMARKET::cleaner_salary()
{
    cout << setw(30) << "CALCULATE CLEANER'S SALARY" << endl;
    cout << endl;
    calc();
}

int main()
{

    SUPERMARKET EMPLOYEE;

    while (true)
    {
        int options;

        cout << setw(60) << "MY SUPERMARKET" << endl;
        cout << endl;
        cout << "YOUR EMPLOYEES" << endl;
        cout << "1. CLEANERS" << endl;
        cout << "2. MANAGER" << endl;
        cout << "3. SECURITY" << endl;
        cout << "4. CASHIERS" << endl;
        cout << "0. EXIT THE PROGRAM" << endl;

        cout << "Select employee category: ";
        cin >> options;
        switch (options)
        {
        case 0:
            cout << "Thank you for using the Program, Goodbye" << endl;
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
            break;
        default:
            cout << "INVALID INPUT" << endl;
        }
    }
}