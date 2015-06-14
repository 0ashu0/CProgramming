#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int x,y;
    int i,j;
    x=y= rand() % 10;
    int P[x][y];

    for(i=0;i<6;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0 || j==i)
            {
                P[i][j] = 1;
            }
            else
            P[i][j] = P[i-1][j-1] + P[i-1][j];
            cout<<P[i][j];
        }
        cout<<"\n";
    }
}

