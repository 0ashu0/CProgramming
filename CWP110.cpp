#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int random;
    int sampling = 10;
    int arr[sampling];
    int i;
    int temp = 0;
    int count = 0;

    for(i=0;i<sampling;i++)
        arr[i] = rand() % 10;

    for(i=0;i<sampling;i++)
    {
        cout<<arr[i]<<"\n";
    }

    cout<<"sampling done\n";

    for(i=0;i<sampling/2;i++)
    {
        temp = arr[sampling-1-i];
        arr[sampling-1-i] = arr[i];
        arr[i] = temp;
        count++;
    }

    for(i=0;i<sampling;i++)
    {
        cout<<arr[i]<<"\n";
    }

    cout<<"total count "<<count;
}
