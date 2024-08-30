#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ofstream outputFile;
    outputFile.open("Demofile.txt");

    cout<<setw(60)<<"Now Writing Data to the File...."<<endl;

    outputFile<<"Thapelo"<<endl;
    outputFile<<"Nyokong"<<endl;

    outputFile.close();
    cout<<setw(45)<<"Done"<<endl;

    return 0;
}