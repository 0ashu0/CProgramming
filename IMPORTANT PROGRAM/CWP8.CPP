#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	int n,x,y,z,w;
	clrscr();
	cout<<"Enter a three digit number=";
	cin>>n;
	x=n/100;
	w=n%100;
	y=w/10;
	z=w%10;
	cout<<"Sum of the digits="<<x+y+z<<endl;
	cout<<"Product of the digits="<<x*y*z<<endl;
	cout<<"Reverse of the number="<<setw(3)<<setfill('0')<<100*z+10*y+x<<endl;
	getch();
}