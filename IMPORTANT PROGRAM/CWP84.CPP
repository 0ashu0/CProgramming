#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char x;
	clrscr();
	cout<<"Enter one character=";
	x=getchar();
	if(x>='a'&&x<='z')
		putchar(x-32);
	else
		if(x>='A'&&x<='Z')
			putchar(x+32);
		else
			putchar(x);
	getch();
}

