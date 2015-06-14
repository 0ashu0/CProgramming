#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[80],tempstr[80];
	int i,j,k=1,n;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);
	tempstr[0]=str[0];
	for(i=1;i<n;i++)
	   if(str[i-1]==' '&&str[i]!=' '||str[i-1]!=' '&&str[i]==' '
					||str[i-1]!=' '&&str[i]!=' ')
	   {
		tempstr[k]=str[i];
		k++;
	   }
	tempstr[k]='\0';
	for(i=0;i<=k;i++)
		str[i]=tempstr[i];
	cout<<"Modified string\n";
	puts(str);
	getch();
}