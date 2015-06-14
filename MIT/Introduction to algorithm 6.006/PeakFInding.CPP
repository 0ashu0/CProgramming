#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
    int ran = rand() % 5 + 15;
    int arr[ran];
    int ind[ran];
    int i=0,j=0;
    for(i=0;i<ran;i++)
    {
    	arr[i] = rand() % 10;
    	ind[i] = 0;
    }
    for(i=0;i<ran;i++)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<"\n";

    for(i=0;i<ran;i++)
	{
		if((arr[i] >= arr[i+1]) && (i==0))
			ind[i] = 1;
		else if((arr[i] >= arr[i-1]) && (arr[i] >= arr[i+1]))
			ind[i] = 1;
		else if((arr[i] >= arr[i-1]) && (i==ran-1))
			ind[i] = 1;
	}

	for(i=0;i<ran;i++)
		cout<<ind[i]<<" ";


}
