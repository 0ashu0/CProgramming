#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	x=(3,4,5);
	y=(x,++x,x++);
	z=(y,--y,y++);
	cout<<x<<y<<z<<endl;
	getch();
}
