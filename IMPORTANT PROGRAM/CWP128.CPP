#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,max,temp;
	clrscr();
	cout<<"Enter order of matrix(not more than 10)=";
	cin>>m>>n;

	cout<<"Enter elemnts of matrix=";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	if(m>n) max=m;
	else max=n;

	for(i=0;i<max;i++)
	for(j=0;j<max;j++)
	if(i<j)
	{
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
	}

	cout<<"Transpose matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<a[i][j]<<'\t';
		cout<<'\n';
	}
	getch();
}


