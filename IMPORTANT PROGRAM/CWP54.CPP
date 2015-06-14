#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{                                                           ;
		for(j=i;j<=2*i-1;j++)
			cout<<' '<<j;
		cout<<'\n';
	}
	getch();
}