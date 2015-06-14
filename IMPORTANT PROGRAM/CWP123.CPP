#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,m1,n1,m2,n2;
	clrscr();
	cout<<"Enter order of first matrix(not more than 10X10)=";
	cin>>m1>>n1;
	cout<<"Enter order of second matrix(not more than 10X10)=";
	cin>>m2>>n2;
	if(n1==m2)
	{
	    cout<<"Enter elements of first matrix=";
	    for(i=0;i<m1;i++)
	    for(j=0;j<n1;j++)
		cin>>a[i][j];

	    cout<<"Enter elements of second matrix=";
	    for(i=0;i<m2;i++)
	    for(j=0;j<n2;j++)
		cin>>b[i][j];

	    for(i=0;i<m1;i++)
	    for(j=0;j<n2;j++)
	    {
		c[i][j]=0;
		for(k=0;k<n1;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
	    }

	    cout<<"Multiplication matrix\n";
	    for(i=0;i<m1;i++)
	    {
		for(j=0;j<n2;j++)
		    cout<<c[i][j]<<'\t';
		cout<<'\n';
	    }
	}
	else
		cout<<"Order mismatch\n";
	getch();
}