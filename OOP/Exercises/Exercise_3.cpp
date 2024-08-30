/*Create a Student class with private attributes for name, age, and grade. Implement public methods
to set and get student details. Use public access specifiers for the setter and getter methods,
ensuring controlled access to student information.*/
#include <iostream>
using namespace std;

class Student{
        private:
        string name;
        int age;
        double grade;
        public:
        void set_name(string n);
        void set_age(int a);
        void set_grades(double g);
        string get_name();
        int get_age();
        double get_grades();

};
void Student::set_name(string n){
    name =n;
}
void Student::set_age(int a){
    age =a;
}
void Student::set_grades(double g){
    grade =g;
}

string Student::get_name(){
    return name;
}
int Student::get_age(){
    return age;
}
double Student::get_grades(){
    return grade;
}


int main(){
    Student Thapelo;

    Thapelo.set_name("Thapelo");
    Thapelo.set_age(26);
    Thapelo.set_grades(88);

    cout<<"Student Name: "<<Thapelo.get_name()<<endl;
    cout<<"Student Age: "<<Thapelo.get_age()<<endl;
    cout<<"Student Grades: "<<Thapelo.get_grades()<<endl;

}