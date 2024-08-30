/*Create a base class Animal with attributes like species and age. Then, create subclasses for different
types of animals like Dog, Cat, and Bird. Each subclass should inherit from the Animal class and can
have additional attributes or methods specific to that type of animal.
*/

#include <iostream>
#include <iomanip>
using namespace std;



class Animal{
    private:
    string species;
    int age;
    public:
    Animal(); //!Constructor
    void set_species(string s);
    void set_Age(int A);
    string get_species();
    int get_age();
};

void Animal::set_species(string s){
    species = s;
}
void Animal::set_Age(int A){
    age = A;
}
string Animal::get_species(){
    return species;
}
int Animal::get_age(){
    return age;
}
Animal::Animal(){
    cout<<setw(60)<<"ANIMAL KINGDOM"<<endl;
}

class Dog:public Animal{


};

class Cat:public Animal{

};

class Bird:public Animal{

};


int main(){
    Dog Wolf;
    Wolf.set_species("Wolf");

    cout<<"Species: "<<Wolf.get_species();

}