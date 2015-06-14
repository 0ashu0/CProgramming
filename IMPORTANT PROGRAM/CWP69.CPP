#include<iostream.h>
#include<conio.h>
void main()
{
	char i,j,m;
	int k;
	clrscr();
	for(i='E';i>='A';i--)
	{
		for(j='A';j<=i;j++)
			cout<<' '<<j;
		for(k=1;k<=4*(69-int(i))-2;k++)
			cout<<' ';
		if(i=='E') m='D';
		else m=i;
		for(j=m;j>='A';j--)
			cout<<' '<<j;
		cout<<'\n';
	}
	getch();
}