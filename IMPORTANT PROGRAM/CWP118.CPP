#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],d[10][10];
	int m1,n1,m2,n2,i,j;
	clrscr();
	cout<<"Enter order of first matrix(not more than 10)=";
	cin>>m1>>n1;
	cout<<"Enter order of second matrix(not more than 10)=";
	cin>>m2>>n2;
	if(m1==m2&&n1==n2)
	{
		cout<<"Enter elements of first matrix=";
		for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			cin>>a[i][j];

		cout<<"Enter elemnts of second matrix=";
		for(i=0;i<m2;i++)
		for(j=0;j<n2;j++)
			cin>>b[i][j];

		for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			c[i][j]=a[i][j]+b[i][j];

		for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			d[i][j]=a[i][j]-b[i][j];

		cout<<"Addition matrix\n";
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
				cout<<c[i][j]<<'\t';
			cout<<'\n';
		}

		cout<<"Subtraction matrix\n";
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
				cout<<d[i][j]<<'\t';
			cout<<'\n';
		}
	}
	else
		cout<<"Order mismatch\n";
	getch();
}



