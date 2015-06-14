#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10];
	int i,j,m,n;
	clrscr();
	cout<<"Enter order of matrix(not more than 10)=";
	cin>>m>>n;

	cout<<"Enter elemnts of matrix=";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		b[j][i]=a[i][j];

	cout<<"Transpose matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<b[i][j]<<'\t';
		cout<<'\n';
	}
	getch();
}


