#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char S[100];
    cin >> S;
    if(S[0] == 'A' && S[2] == 'C' && islower(S[1]))
    {
        for(int i=3; i<strlen(S); i++)
        {
            if(islower(S[i]))
                goto level;
        }
    level:
        cout << "AC" << endl;
    }
    else
        cout << "WA" << endl;

}