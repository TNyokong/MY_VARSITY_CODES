#include<iostream>
using namespace std;

//Public- Accessible from outside
//?Private-Cannot be accessed from outside
//!Protected-Can only be accessed in inherited classes

class Car{
    public:
    int x;
    private:
    int y;
};

int main(){
    Car BMW;
    BMW.x =5;
}

//!Only x is accessible since it's public. y is not accessible.
//Remember: Member variables and functions are automatically private, when they are not specified.
