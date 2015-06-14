#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char x;
	clrscr();
	cout<<"Enter one character=";
	x=getchar();
	if(x>='A'&&x<='Z'||x>='a'&&x<='z')
		cout<<x<<" is an alphabet\n";
	else
		if(x>='0'&&x<='9')
			cout<<x<<" is digit\n";
		else
			cout<<x<<" is other character\n";
	getch();
}