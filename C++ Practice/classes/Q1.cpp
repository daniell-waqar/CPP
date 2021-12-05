// program to input a date and print on the screen using class.

#include <iostream>
using namespace std;

class Date
{   
    private:
    int d,m,y;      //Data members
    public:
    int setDate()
    {
        cout << "Enter Day :\t";
        cin>>d;

        cout << "Enter Month :\t";
        cin>>m;

        cout << "Enter Year :\t";
        cin>>y;

    }

    int printDate()
    {
        cout << "Date is : " << d <<"/"<< m <<"/" << y << endl;
    }
};

int main()
{
    // Declare an object of class Date
    Date date;

    date.setDate();
    date.printDate();

    return 0;
}