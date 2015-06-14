#include<iostream.h>
#include<conio.h>
void main()
{
	int prod(int,int);
	int x=10,y=20,p,q;
	clrscr();
	p=prod(x,y);
	q=prod(prod(p,x),2);
	cout<<p<<'\n'<<q<<'\n';
	getch();
}
int prod(int a,int b)
{
	return a*b;
}