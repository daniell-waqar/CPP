/* program to input the name of student and marks of three subjects,
calculate the total marks and average marks. Each subject has maximum of 100 marks.*/

#include <iostream>
using namespace std;

class Marks
{   
    private:
    float s1,s2,s3,avg,totMarks;
    string name;
public:
    void getData()
    {
        cout << "Enter name of Student : "; cin>>name;

        cout << "Enter marks of 1st subjet : ";cin >> s1;

        cout << "Enter marks of 2nd subject : ";cin >> s2;

        cout << "Enter marks of 3rd subject : ";cin >> s3;

        totMarks = s1+s2+s3;

        avg = totMarks/3;

        cout << endl;
    }
    

    void showData()
    {
        cout << "Name of the Student : " << name << endl;

        cout << "Marks of the 1st Student : " << s1 << endl;

        cout << "Marks of the 2nd Student : " << s2 << endl;

        cout << "Marks of the 3rd Student : " << s3 << endl;

        cout << "Total Marks : " << totMarks << endl;

        cout << "Average : " << avg << endl;


    }
};

int main()
{
    Marks studentrecord;

    studentrecord.getData();
    studentrecord.showData();

    return 0;
}