#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,x,y,temp;
	clrscr();
	cout<<"Enter order of matrix(not more than 10X10)=";
	cin>>m>>n;
	cout<<"Enter elements of matrix=";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];
	cout<<"Enter row numbers which are to be exchanged=";
	cin>>x>>y;
	for(j=0;j<n;j++)
	{
		temp=a[x][j];
		a[x][j]=a[y][j];
		a[y][j]=temp;
	}

	cout<<"Modified array\n";
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
		cout<<a[i][j]<<' ';
	    cout<<'\n';
	}
	getch();
}

