#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream File_2("My Address.txt");

    File_2<<"1704 Tshekedi street"<<endl;

    File_2.close();
}