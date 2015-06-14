#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],at[10][10],bt[10][10],ct[10][10],mt[10][10];
int m1,n1,m2,n2;
clrscr();
void readmat(int [][10],int,int);
void printmat(int [][10],int,int);
void multmat(int [][10],int [][10],int [][10],int,int,int);
void transpose(int [][10],int[][10],int,int);
int equal(int [][10],int [][10],int,int);
cout<<"Enter order of first matrix=";
cin>>m1>>n1;
cout<<"Enter order of second matrix=";
cin>>m2>>n2;
if(n1==m2)
{
	cout<<"Enter  elements of first matrix=";
	readmat(a,m1,n1);
	cout<<"Enter elements of second matrix=";
	readmat(b,m2,n2);

	multmat(a,b,c,m1,n2,n1);
	transpose(c,ct,m1,n2);

	transpose(b,bt,m2,n2);
	transpose(a,at,m1,n1);
	multmat(bt,at,mt,n2,m1,n1);

	cout<<"LHS\n";
	printmat(ct,n2,m1);
	cout<<"RHS\n";
	printmat(mt,n2,m1);

	if(equal(ct,mt,n2,m1)) cout<<"Property proved\n";
}
else
cout<<"Order mismatch\n";
getch();
}
void readmat(int p[][10],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	    cin>>p[i][j];
}
void printmat(int p[][10],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
	    for(j=0;j<y;j++)
		cout<<p[i][j]<<'\t';
	    cout<<'\n';
	}
}
void multmat(int p[][10],int q[][10],int r[][10],int x,int y,int z)
{
	int i,j,k;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	{
	    r[i][j]=0;
	    for(k=0;k<z;k++)
		r[i][j]=r[i][j]+p[i][k]*q[k][j];
	}
}
void transpose(int p[][10],int q[][10],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
		q[j][i]=p[i][j];
}
int equal(int p[][10],int q[][10],int x,int y)
{
	int i,j,count=0;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
		if(p[i][j]==q[i][j])
			count++;
	if(count==x*y) return 1;
	else return 0;
}






