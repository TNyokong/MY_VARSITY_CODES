#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y, int z){
        brand = x;
        model = y;
        year = z;
    }

};


int main(){
    Car BMW("BM","X5",1999);

    cout<<BMW.year<<endl;

}