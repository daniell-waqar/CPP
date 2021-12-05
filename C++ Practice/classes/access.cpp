// C++ program to demonstrate accessing of data members

#include <iostream>
using namespace std;

class Bike {

    // Access specifier
    public:

    //Data members
    string color;
    int model;
    string name;

};      // end of class body

int main()
{   
    // Declare an object of class Bike
    Bike b1;

    // accessing data members
    b1.color = "Black";
    b1.model = 2019;
    b1.name = "Yamma";

    cout << "Bike model is : " << b1.model << endl;
    cout << "Bike color is : " << b1.color << endl;
    cout << "Bike name is : " << b1.name << endl;
    
    

}