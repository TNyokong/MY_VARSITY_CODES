#include<iostream>
using namespace std;

class Details{
    private:
    string name;
    int age;

    protected:
    string position;

    public:
    void set_name(string s);
    void set_age(int a);
    string get_name();
    int get_age();
};


class Stuff:public Details{

}; 



void Details::set_name(string s){
    name =s;
}
void Details::set_age(int a){
    age = a;
}

string Details::get_name(){
    return name;
}

int Details::get_age(){
    return age;
}


int main(){

    Details Learner;
    Stuff Teacher;
    


    string name;
    int age;

    

    cout<<"Enter the name: ";
    cin>>name;
    Learner.set_name(name);

    cout<<"Enter the Age: ";
    cin>>age;
    Learner.set_age(age);

    cout<<"Learner Name: "<<Learner.get_name()<<endl;
    cout<<"Learner Age: "<<Learner.get_age()<<endl;


}