#include<iostream.h>
#include<conio.h>
void main()
{
	int x=3,y=4,z,w;
	clrscr();
	z=x++ + ++x + x++ + y-- + ++y;
	w=x++ + ++x + --x + ++x + y++ + y++;
	cout<<x<<' '<<y<<' '<<z<<' '<<w<<endl;
	getch();
}
