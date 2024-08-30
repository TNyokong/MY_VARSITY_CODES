/*: Create a Rectangle Class Create a class Rectangle that represents a rectangle shape. The
class should have attributes for length and width, and methods to calculate the area and perimeter
of the rectangle.*/

#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
    private:
    double length;
    double width;
    public:
    void set_length(double len);
    double get_length();
    void set_width(double w);
    double get_width();
    double Area();  //changed to double
};
void Rectangle::set_length(double len){
    length = len;   //length comes 1st
}
void Rectangle::set_width(double w){
    width = w;
}
double Rectangle::get_length(){
    return length;
}
double Rectangle::get_width(){
    return width;
}
double Rectangle::Area(){
    return length * width;
}

int main(){
    Rectangle Box;
    Box.set_length(25);
    Box.set_width(2);

    cout<<"The length of your box is: "<<Box.get_length()<<endl;
    cout<<"The Width of your box is: "<<Box.get_width()<<endl;
    cout<<"The Area of your Box is: "<<Box.Area()<<endl;

};