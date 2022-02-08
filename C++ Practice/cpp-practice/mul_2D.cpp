#include <iostream>
using namespace std;


int multi(int A[4][6])
{   
    
    for(int i = 0;i<4; ++i)
    {  
        int rsum = 1;
        for(int j = 0;j<6; ++j)
        {
            rsum *= A[i][j];
            
        }

        cout << "Multiplication of Row " << i+1 << ": " << rsum<<endl;

    }
}

int main()
{
    int A[4][6]={{2,3,1,5,0,2},{2,1,1,3,1,2},{2,1,1,2,1,3},{0,1,5,0,1,8}};
    multi(A);
}