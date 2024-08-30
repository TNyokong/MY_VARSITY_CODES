#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string  myText;

    ifstream read("My_details.txt");

    while(getline(read,myText)){

        cout<<myText;
    
    }


    read.close();

}