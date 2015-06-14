#include<iostream.h>
#include<conio.h>
void main()
{
	int n,r;
	unsigned long int nf,rf,nrf;
	unsigned long int fact(int);
	clrscr();
	cout<<"Enter values of n and r to calculate nCr=";
	cin>>n>>r;
	if(n<0||r<0||n<r) cout<<"Invalid data\n";
	else
	{
		nf=fact(n);
		rf=fact(r);
		nrf=fact(n-r);
		cout<<"Answer="<<nf/(rf*nrf)<<'\n';
	}
	getch();
}
unsigned long int fact(int x)
{
	unsigned long int f=1;
	int i;
	for(i=1;i<=x;i++)
		f=f*i;
	return f;
}

