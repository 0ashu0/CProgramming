#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	int n,x,y;
	clrscr();
	cout<<"Enter a two digit number=";
	cin>>n;
	x=n/10;
	y=n%10;
	cout<<"Sum of the digits="<<x+y<<endl;
	cout<<"Product of the digits="<<x*y<<endl;
	cout<<"Reverse of the number="<<setw(2)<<setfill('0')<<10*y+x<<endl;
	getch();
}