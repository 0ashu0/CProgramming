#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
			cout<<' '<<'*';
		for(k=1;k<=4*i-6;k++)
			cout<<' ';
		if(i==1) m=4;
		else m=6-i;
		for(j=1;j<=m;j++)
			cout<<' '<<'*';
		cout<<'\n';
	}
	getch();
}