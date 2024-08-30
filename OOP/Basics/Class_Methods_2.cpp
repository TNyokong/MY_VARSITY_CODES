#include <iostream>
using namespace std;

class Vehicle{
    public:
    void brand();
};

void Vehicle::brand(){
    cout<<"BMW";
}

int main(){
    Vehicle Car;
    Car.brand();

}