#include <iostream>
#include <iomanip>
using namespace std;

class House
{
public:
    double length;
    double breath;
    double height;
    char Y;
    House();
    double Area();
    double volume();
};

double House::Area()
{
    return length * breath;
}

double House::volume()
{
    return length * breath * height;
}

House::House(){
    cout<<setw(60)<<"WELCOME TO THE CALCULATOR"<<endl;
}


int main()
{
    House House_1;

    cout << "Enter the length of House 1: ";
    cin >> House_1.length;
    cout << "Enter the breath of House 1: ";
    cin >> House_1.breath;
    cout << "Enter the height of House 1: ";
    cin >> House_1.height;

    cout << "The Area of the House is: " << House_1.Area() << endl;
    cout << "The Volume the House is " << House_1.volume() << endl;

    cout << "Do you want to calculate again(Y-yes N-No): ";
    cin >> House_1.Y;
    if (House_1.Y == 'Y')
    {
        main();
    }
    else
        cout << "DONE";
}