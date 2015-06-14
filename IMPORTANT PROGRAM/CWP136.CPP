#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[80];
	int i,n;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);

	if(str[0]>='a'&&str[0]<='z')
		str[0]=str[0]-32;

	for(i=0;i<n-1;i++)
		if(str[i]==' '&& str[i+1]>='a'&&str[i+1]<='z')
			str[i+1]=str[i+1]-32;

	puts(str);
	getch();
}


