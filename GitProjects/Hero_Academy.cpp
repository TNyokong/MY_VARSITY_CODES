#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string Hero_Name;
    int H;
    string Hero_Powers;

    cout << endl;
    cout << setw(60) << "WELCOME TO THE HERO ACADEMY" << endl;
    cout << endl;
    cout << "Here are heroes we have in our Academy" << endl;
    cout << endl;
    cout << "1. Shoto Todoroki" << endl;    // Half Cold, Half Hot
    cout << "2. Katsuki Bakugo" << endl;    // Explosion
    cout << "3. Ochako Uraraka" << endl;    // Zero Gravity
    cout << "4. Izuku Nidoriya" << endl;    // One For All
    cout << "5. Fumikage Tokoyami" << endl; // Dark Shadow

    cout << endl;
    cout << "Which Hero would you like to view: ";
    cin >> H;
    switch (H)
    {
    case 'I':
        cout << "Hero Name: "
             << "Shoti Todoroki" << endl;
        cout << "Hero Rank: "
             << "1" << endl;
        cout << "Hero Powers :"
             << "Half Cold, Half Hot" << endl;
        break;
    case 'T':
        cout << "Hero Name: "
             << "Katsuki Bakugo" << endl;
        cout << "Hero Rank: "
             << "2" << endl;
        cout << "Hero Powers :"
             << "Explosion" << endl;
        break;
    case 'Z':
        cout << "Hero Name: "
             << "Ochako Uraraka" << endl;
        cout << "Hero Rank: "
             << "3" << endl;
        cout << "Hero Powers :"
             << "Zero Gravity" << endl;
        break;
    case 'W':
        cout << "Hero Name: "
             << "Izuku Nidoriya" << endl;
        cout << "Hero Rank: "
             << "4" << endl;
        cout << "Hero Powers :"
             << "One For All" << endl;
        break;
    case 'S':
        cout << "Hero Name: "
             << "Fumikage Tokoyami" << endl;
        cout << "Hero Rank: "
             << "4" << endl;
        cout << "Hero Powers :"
             << "Dark Shadow" << endl;
        break;
    default:
        cout << "We don't have such a hero in our Category";
    }
}