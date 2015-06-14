#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	int ran = 20;
	int arr[ran];
	int i=0,j=0,key=0,count=0
	;
	for(i=0;i<ran;i++)
	{
		arr[i] = rand() % 15;
	}
	for(i=0;i<ran;i++)
	{
		cout<<arr[i]<<' ';
	}
	cout<<'\n';
	for(j=1;j<ran;j++)
	{
        key=arr[j];
        i=j-1;
        while(i>-1 && arr[i]>key)
		{
            arr[i+1] = arr[i];
            i=i-1;
            count++;
		}
		arr[i+1]=key;
	}
	for(i=0;i<ran;i++)
	{
		cout<<arr[i]<<' ';
	}
	cout<<'\n'<<count;
}
