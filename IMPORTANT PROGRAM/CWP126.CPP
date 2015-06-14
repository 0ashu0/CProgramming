#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,temp,n;
	clrscr();
	cout<<"Enter order of square matrix(not more than 10)=";
	cin>>n;

	cout<<"Enter elemnts of matrix=";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(i<j)
	{
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
	}

	cout<<"Transpose matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<'\t';
		cout<<'\n';
	}
	getch();
}


