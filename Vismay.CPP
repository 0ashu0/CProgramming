#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int i=0,j=0;
	srand(time(0));
    int ran = rand() % 5 + 10;
	int a[ran];
	for(i=0;i<ran;i++)
		a[i] = rand() % 5;

    cout<<"bunch of random numbers to test algorithms\n";
	for(i=0;i<ran;i++)
		cout<<a[i]<<' ';

    cout<<"\n\n algorithm's answer\n";

    int arr[2][ran];
	int count = 0;
    for(i=0;i<ran;i++)
	{
		for(j=0;j<ran;j++)
        {
            if(a[i] == a[j])
			{
                arr[0][i] = a[i];
                count++;
			}
			arr[1][i] = count;
        }
        count = 0;
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<ran;j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<" \n";
	}

	for(j=0;j<ran;j++)
	{

	}
}
