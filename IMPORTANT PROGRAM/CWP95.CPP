#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	int gcd(int,int);
	clrscr();
	cout<<"Enter two positive integers=";
	cin>>x>>y;
	if(x<=0 || y<=0)
		cout<<"Invlaid data\n";
	else
		cout<<"GCD of "<<x<<" and "<<y<<"="<<gcd(x,y)<<'\n';
	getch();
}
int gcd(int m,int n)
{
	if(m<n) return gcd(n,m);
	else if(n==0) return m;
	     else return gcd(n,m%n);
}
