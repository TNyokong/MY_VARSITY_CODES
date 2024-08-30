#include<iostream>
#include<fstream>
using namespace std;



int main(){


ofstream File_1("My_details.txt");

File_1<<"Name: Thapelo"<<endl;
File_1<<"Age: 26"<<endl;


File_1.close();


}