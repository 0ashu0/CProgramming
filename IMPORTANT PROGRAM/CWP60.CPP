#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=2*(5-i);k++)
			cout<<' ';
		for(j=1;j<=i;j++)
			cout<<' '<<'*';
		cout<<'\n';
	}
	getch();
}