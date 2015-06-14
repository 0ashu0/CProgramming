#include<iostream.h>
#include<conio.h>
void main()
{
	int x=13,y=5,d1;
	float d2,d3,d4,d5,d6;
	clrscr();
	d1=x/y;
	d2=x/y;
	d3=float(x/y);
	d4=float(x)/y;
	d5=x/float(y);
	d6=float(x)/float(y);
	cout<<d1<<'\n';
	cout<<d2<<'\n';
	cout<<d3<<'\n';
	cout<<d4<<'\n';
	cout<<d5<<'\n';
	cout<<d6<<'\n';
	getch();
}