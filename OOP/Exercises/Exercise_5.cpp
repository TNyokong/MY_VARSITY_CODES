/*Build a Library class that stores books as private attributes. Implement a public method to add books
to the library. Use private access specifier for the book list to prevent direct modification from
outside the class.*/

#include<iostream>
using namespace std;

class Library{
    private:
    string books;
    public:
    void set_books(string B);
    string get_books();
};

void Library::set_books(string B){
    books = B;
}
string Library::get_books(){
    return books;
}

int main(){
    Library Booka;
    Booka.set_books("Maths");
    Booka.set_books("Science");


    cout<<"Book_1: "<<Booka.get_books();

}