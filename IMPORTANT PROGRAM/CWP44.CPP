#include<iostream.h>
#include<conio.h>
void main()
{
	int x=5,i;
	clrscr();

	for(i=1;i<=12;i++)
	{
		switch(i%4)
		{
			case 0:x=x-2;break;
			case 1:x=x+3;break;
			case 2:x=x*4;break;
			case 3:x=x/5;break;
		}
		cout<<x<<'\n';
	}
	getch();
}