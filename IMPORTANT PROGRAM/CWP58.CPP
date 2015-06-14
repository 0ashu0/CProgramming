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
		for(j=i;j<=2*i-1;j++)
			cout<<' '<<j;
		for(m=2*i-2;m>=i;m--)
			cout<<' '<<m;
		cout<<'\n';
	}
	getch();
}
