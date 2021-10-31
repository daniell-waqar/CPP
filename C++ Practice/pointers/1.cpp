

#include <iostream>
using namespace std;
/*
int main()
{
    int x;
    int *p;
    
    p = &x;

    *p = 25;

    cout << "value of varibale   =  " << *p << endl;
    cout << "Memory address of variable   =  " << p << endl;

    return 0;

}*/

//Another method

int main()
{
    int x;
    int *p;
    
    p = &x;

    cout << "Enter the value : ";
    cin >> *p;

    cout << "\nvalue of varibale   =  " << x << endl;
    cout << "\nMemory address of variable   =  " << p << endl;

    return 0;

}


