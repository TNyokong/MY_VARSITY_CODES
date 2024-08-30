#include<iostream>
#include<fstream>
using namespace std;

string name;
string password;



void create_profile(){
    ofstream create("My_Data.txt");

    cout<<"Create a username: ";
    cin>>name;
    cout<<"Create password: ";
    cin>>password;


    create<<name<<endl;
    create<<password<<endl;

    create.close();


}



int main(){
    create_profile();

}
