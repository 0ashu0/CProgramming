#include<iostream.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	for(i='E';i<='I';i++)
	{
		for(j=i;j<='I';j++)
			cout<<' '<<j;
		cout<<'\n';
	}
	getch();
}