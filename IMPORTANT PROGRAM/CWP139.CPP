#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[80];
	int i,n,count=0;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);
	for(i=1;i<n;i++)
		if(str[i]==' '&&str[i-1]!=' ')
			count++;
	if(str[n-1]!=' ')
		count++;
	cout<<"Number of words="<<count<<'\n';
	getch();
}
