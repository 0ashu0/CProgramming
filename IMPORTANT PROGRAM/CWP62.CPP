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
		for(j=1;j<=2*i-1;j++)
			cout<<' '<<'*';
		cout<<'\n';
	}
	for(i=4;i>=1;i--)
	{
		for(k=1;k<=2*(5-i);k++)
			cout<<' ';
		for(j=1;j<=2*i-1;j++)
			cout<<' '<<'*';
		cout<<'\n';
	}
	getch();
}