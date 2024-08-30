/*Create a base class Vehicle with attributes like make, model, and year. Then, create subclasses for
different types of vehicles like Car, Motorcycle, and Truck. Each subclass should inherit from the
Vehicle class and can have additional attributes or methods specific to that type of vehicle*/


#include<Iostream>
#include<iomanip>
using namespace std;

class Vehicle{
    string model;
    int year;
};

class Car:public Vehicle{

};

class Motocycle:public Vehicle{
    
};

class Truck:public Vehicle{

};

int main(){
    Truck Optomus;
}