#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[80],s2[80];
	int i,n1,n2;
	clrscr();
	cout<<"Enter first string=";
	gets(s1);
	cout<<"Enter second string=";
	gets(s2);

	n1=strlen(s1);
	n2=strlen(s2);
	if(n1+n2<80)
	{
		for(i=0;i<=n1;i++)
			s2[n2+i]=s1[i];
		cout<<"Concatenated string\n";
		puts(s2);
	}
	else
		cout<<"Space too small for concatenation\n";
	getch();
}