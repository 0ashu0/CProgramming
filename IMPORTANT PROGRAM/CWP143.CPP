#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[80];
	int f,b,i,n;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);
	f=b=n-1;
	while(f!=-2)
	{
		while(f!=-1&&str[f]!=' ')
			f--;
		for(i=f+1;i<=b;i++)
			cout<<str[i];
		if(f!=-1) cout<<' ';
		f=b=f-1;
	}
	getch();
}