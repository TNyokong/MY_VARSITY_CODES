#include<iostream>
using namespace std;

class MyClass{
    public:
    void myFunction(){
        cout<<"Some Content";
    }
};

class myChild:public MyClass{

};

class myGrandChild:public myChild{

};


int main(){

myGrandChild object;
object.myFunction();

return 0;

}