#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{                                                           ;
		for(j=i;j<=5;j++)
			cout<<' '<<j%2;
		cout<<'\n';
	}
	getch();
}