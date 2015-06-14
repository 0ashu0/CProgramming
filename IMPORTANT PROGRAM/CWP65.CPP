#include<iostream.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	for(i='E';i>='A';i--)
	{
		for(j='E';j>=i;j--)
			cout<<' '<<j;
		cout<<'\n';
	}
	getch();
}