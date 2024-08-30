#include <iostream>
#include <iomanip>
using namespace std;

class Wardrobe
{
public:
    int number;
    int num;
    Wardrobe();
    void shoes();
    void dresses();
    void trousers();
    void shirts();
    void edit();
    void view();
    void add();
    void del();
    void calc();
};

Wardrobe::Wardrobe()
{
    cout << setw(60) << "WELCOME TO YOUR WARDROBE" << endl;
    num = 0;
}

int main();

int option;

void Wardrobe::calc(){
     cout << "SELECT 1 TO VIEW" << endl;
    cout << "SELECT 2 TO EDIT" <<endl;
    cout<<"SELECT 3 TO RETURN TO PREVIOUS PAGE"<<endl;
    cout<<"SELECT 0 TO EXIT"<<endl;
    cout<<endl;
    cout<<"Select an option: ";
    cin >> option;
    switch (option)
    {
    case 1:
        view();
        break;
    case 2:
        edit();
    case 3:
        main();
    case 0:
        exit(0);
    }
}



void Wardrobe::add()
{
    cout << "Enter the number you want to add: ";
    cin >> number;
    num += number;
    cout << "The New Number is :" << num << endl;
}

void Wardrobe::del()
{
    cout << "Enter the number you want to delete: ";
    cin >> number;
    num -= number;
    cout << "The New Number is :" << num << endl;
}

void Wardrobe::edit()
{
    cout << "Select 1 to add" << endl;
    cout << "Select 2 to delete" << endl;
    cout << "Select 3 to return to previous page"<<endl;
    cout<<"Select 0 to EXIT"<<endl;
    cout<<endl;
    cout<<"Select an option ";
    cin >> option;
    switch (option)
    {
    case 1:
        add();
        break;
    case 2:
        del();
        break;
    case 3:
        calc();
    case 0:
        exit(0);
    }
}

void Wardrobe::trousers()
{
calc();
}

void Wardrobe::dresses()
{
    calc();
}

void Wardrobe::shoes()
{
    calc();
}

void Wardrobe::view()
{
    cout << "Number: " << num << endl;
}

void Wardrobe::shirts()
{
   calc();
}

int main()
{
    Wardrobe Clothes;
    while (true)
    {

        int options;

        cout << endl;
        cout << setw(60) << "CLOTHING CATALOG" << endl;
        cout << endl;
        cout << "1. SHOES" << endl;
        cout << "2. Dresses" << endl;
        cout << "3. Trousers" << endl;
        cout << "4. Shirts" << endl;
        cout << "0. EXIT" << endl;
        cout << endl;
        cout << "SELECT A CATEGORY: ";
        cin >> options;
        switch (options)
        {
        case 0:
            cout << "Thank you for using the App, Goodbye";
            return 0;
        case 1:
            Clothes.shoes();
            break;
        case 2:
            Clothes.dresses();
            break;
        case 3:
            Clothes.trousers();
            break;
        case 4:
            Clothes.shirts();
            break;
        default:
            cout << "There is no such category" << endl;
        }
    }
}