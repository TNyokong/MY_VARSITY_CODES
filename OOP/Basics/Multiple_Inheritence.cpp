#include <iostream>
using namespace std;

class My_Class
{
public:
    void My_Funtion()
    {
        cout << "Content";
    }
};

class My_Other_Class
{
public:
    void My_Other_Function()
    {
        cout << "More Content";
    }
};

class My_Child_Class : public My_Class, public My_Other_Class
{
};

int main()
{
    My_Child_Class Kid;
    Kid.My_Funtion();
    Kid.My_Other_Function();

    return 0;
}