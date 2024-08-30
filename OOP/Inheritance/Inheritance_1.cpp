/*Create a Shape class with common attributes like color and area. Then, create subclasses for different
shapes like Circle, Rectangle, and Triangle. Each subclass should inherit from the Shape class and
have specific methods to calculate their area.*/


#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

class shape{
    string color;
    double area;
};

class Circle:public shape{
    public:
    double Area(double r);

};

double Circle::Area(double r){
    return 3.14*r*2;
};

class Rectangle:public shape{
    public:
    double Area();
};

class Triangle:public shape{

};



int main(){
    Circle Mini_Circle;

    cout<<Mini_Circle.Area(1);



}