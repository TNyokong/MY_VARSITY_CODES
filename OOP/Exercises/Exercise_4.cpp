/*Exercise 3: Car Details
Create a Car class with private attributes for make, model, and year. Implement public methods to
set and get car details. Use public access specifiers for the setter and getter methods, and private
access specifier for the attributes, ensuring data encapsulation.*/

#include<iostream>
using namespace std;

class Car{
    private:
    string make;
    string model;
    int year;
    public:
    void set_make(string m);
    void set_model(string mod);
    void set_year(int y);
    string get_make();
    string get_model();
    int get_year();

    
};

void Car::set_make(string m){
    make = m;
}
void Car::set_model(string mod){
    model = mod;
}
void Car::set_year(int y){
    year = y;
}

string Car::get_make(){
    return make;
}
string Car::get_model(){
    return model;
}int Car::get_year(){
    return year;
}



int main(){
    Car Truck;
    Truck.set_make("BMW");
    Truck.set_model("X5");
    Truck.set_year(2016);

    cout<<"Car: "<<Truck.get_make()<<endl;
    cout<<"Model: "<<Truck.get_model()<<endl;
    cout<<"Year: "<<Truck.get_year()<<endl;

}