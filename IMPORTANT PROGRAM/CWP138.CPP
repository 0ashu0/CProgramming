#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char str[80];
	int n=0;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	while(str[n]!='\0')
		n++;
	cout<<"Length of the string="<<n<<'\n';
	getch();
}