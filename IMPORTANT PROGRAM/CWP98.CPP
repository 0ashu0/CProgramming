#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	void fun(int);
	clrscr();
	fun(3);
	getch();
}
void fun(int x)
{
	if(x>0)
	{
		cout<<x<<'\n';
		fun(x-1);
	}
	cout<<x<<'\n';
}