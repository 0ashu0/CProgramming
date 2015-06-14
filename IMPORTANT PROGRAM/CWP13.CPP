#include<iostream.h>
#include<conio.h>
void main()
{
	int x=3,y=4,z=5,a,b,c;
	clrscr();
	a=x^y&z;
	b=x^y<<2;
	c=x+y&&z>>1;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	getch();
}
