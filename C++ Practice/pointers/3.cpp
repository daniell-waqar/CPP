// Program to input data into an array and then to print on the computer screen by using pointer notation.

#include <iostream>
using namespace std;

int main()
{
    int arr[5], *p;
    p = arr;

    cout << "Enter data into array :" << endl;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    cout << "\nValues from array using pointer notation :" << endl;
    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << *p << "\t";
        p++;
    }


}
