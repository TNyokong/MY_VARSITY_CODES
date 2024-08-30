#include <iostream>
#include <iomanip>
using namespace std;

class My_Wardrobe{
    public:
    int clothing[3];
    int Total_Clothes();
    My_Wardrobe();
    char Y;

};

int My_Wardrobe::Total_Clothes(){
    return clothing[0]+clothing[1]+clothing[2]+clothing[3];

}

My_Wardrobe::My_Wardrobe(){
    cout<<setw(60)<<"WELCOME TO MY WARDROBE CALCULATOR"<<endl;
}



int main(){


My_Wardrobe My_clothes;
cout<<endl;

    cout<<"Enter the number of Trousers you have: ";
    cin>>My_clothes.clothing[0]; 
    cout<<"Enter the number of T-shirts you have: ";
    cin>>My_clothes.clothing[1]; 
    cout<<"Enter the number of Shoes you have: ";
    cin>>My_clothes.clothing[2]; 
    cout<<"Enter the number of Socks you have: ";
    cin>>My_clothes.clothing[3];

    cout<<setw(60)<<"YOUR WARDROBE HAS THE FOLLOWING ITEMS"<<endl;

    cout<<"Trousers: "<<My_clothes.clothing[0]<<endl;
    cout<<endl;
    cout<<"T-shirts: "<<My_clothes.clothing[1]<<endl;
    cout<<endl;
    cout<<"Shoes: "<<My_clothes.clothing[2]<<endl;
    cout<<endl;
    cout<<"Socks: "<<My_clothes.clothing[3]<<endl;

    cout<<endl;
    cout<<"The total amount of Items you have in your wardrobe is: "<<My_clothes.Total_Clothes();

    
    cout<<"Do your want to use the wardrobe calculator again: ";
    cin>>My_clothes.Y;

    if (My_clothes.Y == 'Y'){
        main();
    }


}