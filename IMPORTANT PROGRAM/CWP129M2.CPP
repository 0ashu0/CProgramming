#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,n,count=0;
	clrscr();
	cout<<"Enter order of square matrix(not more than 10)=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];


	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		if(a[i][j]==a[j][i])
			count++;

	if(count==n*n) cout<<"Matrix is symmetrical\n";
	else cout<<"Martix is not symmetrical\n";

	getch();
}
