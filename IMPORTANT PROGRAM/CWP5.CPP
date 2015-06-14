#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	float x=1.23456;
	clrscr();
	cout<<x<<endl;
	cout<<setw(12)<<x<<endl;
	cout<<setprecision(3)<<x<<endl;
	cout<<setw(12)<<setprecision(3)<<x<<endl;
	cout<<setw(12)<<setprecision(3)<<setfill('0')<<x<<endl;
	cout<<setw(8)<<setprecision(2)<<setfill('*')<<x<<endl;
	cout<<setw(5)<<setprecision(4)<<setfill('*')<<x<<endl;
	getch();
}