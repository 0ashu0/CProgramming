#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,sumr,sumc,sumt,m,n;
	clrscr();
	cout<<"Enter order of matrix(not more than 10X10)=";
	cin>>m>>n;
	cout<<"Enter elements=";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];


	for(i=0;i<m;i++)
	{
	     sumr=0;
	     for(j=0;j<n;j++)
	     {
		cout<<a[i][j]<<'\t';
		sumr=sumr+a[i][j];
	     }
	     cout<<sumr<<'\n';
	}

	for(j=0;j<n;j++)
	{
	    sumc=0;
	    for(i=0;i<m;i++)
		sumc=sumc+a[i][j];
	    cout<<sumc<<'\t';
	}

	sumt=0;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		sumt=sumt+a[i][j];
	cout<<sumt<<'\n';
	getch();
}
