/* program by using class Employee to input the record of employee
by defining the function member outside the class.*/

#include <iostream>
using namespace std;

class Employee
{
    string name;       //Data members
    float h_rent,ma,bpay,gpay;
public:
    //member functions
    void getRecord();
    void allow();          //prototype
    void displayRecord();
};

int main()
{
    Employee e1;     //e1 is an instance of class Employee

    e1.getRecord();
    e1.allow();       //accessing member functions
    e1.displayRecord();
}

void Employee :: getRecord()
{
    cout << "Enter the name of Employee : ";
    cin >> name;

    cout << "Enter basic pay of Employee : ";
    cin >> bpay;

    cout << endl;
}

void Employee::allow()
{
    h_rent = bpay * 60/100;
    ma = bpay *20/100;
    gpay = h_rent + ma + gpay;
}

void Employee ::displayRecord()
{
    cout << "Name of the Employee : " << name << endl;

    cout << "Basic Pay : " << bpay << endl;

    cout << "House rent  : " << h_rent << endl;

    cout << "Medical allowance : " << ma << endl;

    cout << "Net Pay : " << gpay << endl;
}