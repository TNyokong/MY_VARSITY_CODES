#include<iostream>
using namespace std;
//You use (:) to inherit from a class

class Vehicle{
    public:
    string brand = " Ford";
    void honk(){
        cout<<" tuu,tuu,tuu"<<endl;
    }
};
class Car:public Vehicle{
    string model ="Mustang";
};


int main(){
    Car myCar;
    myCar.honk();
}


