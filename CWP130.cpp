#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    int temp = 10;
    int arr[temp][temp];
    int arrA[temp+1][temp+1];
    int i=0, j=0;

    for(i=0;i<temp;i++)
        for(j=0;j<temp;j++)
        {
            arr[i][j] = rand() % 10;
        }
    for(i=0;i<temp + 1;i++)
        for(j=0;j<temp + 1;j++)
        {
            arrA[i][j] = 0;
        }
    for(i=0;i<temp;i++)
    {
        for(j=0;j<temp;j++)
            cout<<setw(2)<<setfill('0')<<arr[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<temp;i++)
        for(j=0;j<temp;j++)
        {
           arrA[i][j] = arr[i][j];
        }
    for(i=0;i<temp + 1;i++)
    {
        for(j=0;j<temp + 1;j++)
            cout<<setw(2)<<setfill('0')<<arrA[i][j]<<" ";
        cout<<"\n";
    }

    // logic
    int row = 0;
    int col = 0;
    for(i=0;i<temp;i++)
    {
        for(j=0;j<temp;j++)
        {
            row = row + arrA[i][j];
        }
        arrA[i][temp] = row;
        row = 0;
    }

    for(j=0;j<temp;j++)
    {
        for(i=0;i<temp;i++)
        {
            col = col + arrA[i][j];
        }
        arrA[temp][j] = col;
        col = 0;
    }

    for(i=0;i<temp + 1;i++)
    {
        for(j=0;j<temp + 1;j++)
            cout<<setw(2)<<setfill('0')<<arrA[i][j]<<" ";
        cout<<"\n";
    }
}
