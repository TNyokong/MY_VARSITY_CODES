#include <iostream>
using namespace std;
// Many forms - Use methods(functions) to perform many tasks

class Animal
{
public:
    void animalSound()
    {
        cout << " Animal makes sound";
    }
};

class pig : public Animal
{
public:
    void animalSound()
    {
        cout << "Pig says wee wee";
    }
};

class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << " The dog says bow wow";
    }
};

int main()
{
    Animal MyAnimal;

    pig mypig;
    Dog myDog;

    MyAnimal.animalSound();
    cout << endl;
    mypig.animalSound();
    cout << endl;
    myDog.animalSound();
}