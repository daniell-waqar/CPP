#include <iostream>
using namespace std;


int Add(int num);    //Function prototype

int main()
{

    int n = 10, result;

    result = Add(n);

    cout<<"The result is "<<result<<endl;

}

int Add(int num)
{

    int sum = num + 1;

    return sum;
}