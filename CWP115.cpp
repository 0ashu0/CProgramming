#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int sample = 15;
    int index=0;
    int value=0;
    int arr[sample];
    int i=0;
    char response;

    int add(int[],int, int);
    int del(int[],int);

    for(i=0;i<(sample-5);i++)
        arr[i] = rand() % 100;

    for(i=0;i<sample;i++)
        cout<<arr[i]<<"\n";

    cout<<"enter Options \n";
    cin>>response;
    if(response=='A' || response == 'a')
        {
            cout<<"enter index position and value to add \n";
            cin>>index>>value;;
            add(arr, index, value);
        }
    else if(response=='D' || response == 'd')
        {
            cout<<"enter index position to del \n";
            cin>>index;
            del(arr, index);
        }

    for(i=0;i<sample;i++)
        cout<<arr[i];
}

int add(int arr[],int index, int value)
{
    for(int i=(sizeof(arr)/sizeof(int)); i>=index; i--)
        arr[i+1] = arr[i];
    arr[index] = value;

    return arr[];
}

int del(int arr[],int index)
{

}
