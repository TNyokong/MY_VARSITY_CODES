#include<iostream>
using namespace std;

class Information{
    private:
    string name;
    int age;
    public:
    Information(string N, int A);   
    void set_name(string n);
    void set_age(int a);
    string get_name();
    int get_age();
};

void Information::set_name(string n){
    name =n;
}
void Information::set_age(int a){
    age = a;
}
string Information::get_name(){
    return name;
}
int Information::get_age(){
    return age;
}
Information::Information(string N, int A){
    set_name(N);
    set_age(A);
}

int main(){
    Information Learner("TP",26);

    cout<<Learner.get_name()<<endl;


}