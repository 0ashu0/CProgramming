#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int row,col;
    int x,y;
    int i,j;

    cout<<"enter row and columns\n";
    cin>>row>>col;
    int arr[row][col];
    int temp[row];
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            arr[i][j] = rand() % 9;
        }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }

    cout<<"enter the rows to be exchanged start form 0\n";
    cin>>x>>y;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            temp[j] = arr[x][j];
            arr[x][j] = arr[y][j];
            arr[y][j] = temp[j];
        }
    }

    cout<<"after swapping\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }


}
