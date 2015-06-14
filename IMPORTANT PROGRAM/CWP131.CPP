#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[80];
	int i,n;
	cout<<"Enter a string=";
	gets(str);
	n=strlen(str);

	for(i=0;i<n/2;i++)
	   if(str[i]!=str[n-1-i])
		break;

	if(i<n/2) cout<<"The string is not a palindrome\n";
	else cout<<"The string is palindrome\n";

}
