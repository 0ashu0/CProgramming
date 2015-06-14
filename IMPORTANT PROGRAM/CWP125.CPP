#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10][10],b[10][10];
	int i,j,n;
	cout<<"Enter order of square matrix(not more than 10)=";
	cin>>n;

	cout<<"Enter elemnts of matrix=";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		b[j][i]=a[i][j];

	cout<<"Transpose matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<b[i][j]<<'\t';
		cout<<'\n';
	}
	getch();
}


