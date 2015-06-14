#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10][10];
	int i,j,n,sum1=0,sum2=0;
	cout<<"Enter order of square matrix(not more than 10)=";
	cin>>n;
	cout<<"Enter elements of matrix=";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    if(i==j)
		sum1=sum1+a[i][j];
	    if(i+j==n-1)
		sum2=sum2+a[i][j];
	}

	cout<<"Sum of elements in first diagonal="<<sum1<<'\n';
	cout<<"Average of those elements="<<float(sum1)/n<<'\n';

	cout<<"Sum of elements in first diagonal="<<sum2<<'\n';
	cout<<"Average of those elements="<<float(sum2)/n<<'\n';
	getch();
}




