/* Program that produce output of the form    @a@E@E#rTH    */

#include <iostream>
using namespace std;

void encrypt(char T[])
{
    for (int i = 0; T[i] != '\0'; i += 2)

    if (T[i] == 'A' || T[i] == 'E')
        T[i] = '#';
    else if (islower(T[i]))
        T[i] = toupper(T[i]);
    else
        T[i] = '@';
}

int main()
{
    char text[]="SaVE EArtH";
    encrypt(text);

    cout << text << endl;
    
    return 0;
}