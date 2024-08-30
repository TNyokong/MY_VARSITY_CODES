#include <iostream>
using namespace std;

class Car{
    public:
    int speed(int max_speed);
};

int Car::speed(int max_speed){
    return max_speed;

}

int main(){
    Car BMW;
    cout<<BMW.speed(50000);
}