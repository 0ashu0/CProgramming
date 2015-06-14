#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int random;
    int sampling = 10000;
    int arr[sampling];
    int i;
    int temp = 0;
    int count = 0;

    for(i=0;i<sampling;i++)
        arr[i] = rand() % 100;

    for(i=0;i<sampling;i++)
    {
        cout<<arr[i]<<"\n";
    }

    for(int j=0;j<sampling;j++)
    {
        for(i=0;i<sampling;i++)
        {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            count++;
        }
        }
    }

    cout<<"\n\n sorting "<< count<<"\n";

    for(i=0;i<sampling;i++)
        cout<<arr[i]<<"\n";

    cout<<sizeof(arr)/sizeof(int)<<" "<<count;
}

/*
10000 sample 2495064
1000 sample 249569
500 sample 60265
100 sample 2707

100
10
5
1
*/
