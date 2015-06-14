#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,r;
	unsigned long int nf,rf,nrf;
	unsigned long int fact(int);

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
	if(x>0)
		return x*fact(x-1);
	else
		return 1;
}

