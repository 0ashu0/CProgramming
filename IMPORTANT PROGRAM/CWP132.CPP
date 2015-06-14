#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[80],temp;
	int i,n;
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);

	for(i=0;i<n/2;i++)
	{
	    temp=str[i];
	    str[i]=str[n-1-i];
	    str[n-1-i]=temp;
	}

	cout<<"Reversed string\n";
	puts(str);
}
