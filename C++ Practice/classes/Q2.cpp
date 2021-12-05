/* program by using class to input values using a member functions
of a class. Display the sum of two values by using another member function of the class.*/

#include <iostream>
using namespace std;

class Sum
{
    int n1,n2;  //data members

    public:
    void getData(int x,int y)
    {   
        n1 = x;
        n2 = y;
     
    }
    void printSum()
    {
        cout << "Sum is :\t" << n1 + n2 << endl;
    }
};

int main()
{   
    // Declare an object of class Sum
    Sum sum;

    int x,y;

    cout << "First number : ";
    cin >> x;

    cout << "Second number : ";
    cin >> y;

    sum.getData(x,y);

    sum.printSum();

    return 0;
}