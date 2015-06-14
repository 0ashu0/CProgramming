#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char m;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
			cout<<' ';
		for(j=1;j<=i;j++)
			cout<<j;
		for(m='A';m<='A'+i-2;m++)
			cout<<m;
		cout<<'\n';
	}
	getch();
}
