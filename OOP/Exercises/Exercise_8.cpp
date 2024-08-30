#include<iostream>
#include<iomanip>
using namespace std;

class stationary{
    
    private:
    int pens;
    int pencils;
    int rulers;
    int erasers;

    public:
    void set_pens(int p);
    void set_pencils(int penc);
    void set_rulers(int r);
    void set_eraers(int e);
    int get_pens();
    int get_pencils();
    int get_rulers();
    int get_erasers();    
};

void stationary::set_pens(int p){
    pens = p;
}
void stationary::set_pencils(int penc){
    pencils = penc;
}
void stationary::set_rulers(int r){
    rulers = r;
}
void stationary::set_eraers(int e){
    erasers = e;
}

int stationary::get_pens(){
    return pens;
}
int stationary::get_pencils(){
    return pencils;
}
int stationary::get_rulers(){
    return rulers;
}
int stationary::get_erasers(){
    return erasers;
}



int main(){
    stationary stuff;

    stuff.set_pens(20);


    cout<<stuff.get_pens();
}
