#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[80],s2[80];
	int i,n;
	clrscr();
	cout<<"Enter a string=";
	gets(s1);
	n=strlen(s1);
	for(i=0;i<=n;i++)
		s2[i]=s1[i];
	cout<<"Copied string\n";
	puts(s2);
	getch();
}