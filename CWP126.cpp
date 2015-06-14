#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int temp;
    int x,y;
    int i,j;
    srand (time(0));
    x = rand() % 10;
    srand (time(0));
    y = rand() % 10;
    int P[x][y];
    int Q[y][x];

    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            temp = rand() % 10;
            P[i][j] = temp;
        }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<P[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"transpose is \n";

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(i>j)
            {
                temp = P[j][i];
                P[j][i]=P[i][j];
                P[i][j]=temp;
            }
        }
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<P[i][j]<<" ";
        }
        cout<<"\n";
    }
}
