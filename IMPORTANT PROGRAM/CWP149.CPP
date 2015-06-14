#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str[80];
     int palindrome(char []);
     int ans;
     clrscr();
     cout<<"Enter a string=";
     gets(str);
     ans=palindrome(str);
     if(ans==1) cout<<"The string is palindrome\n";
     else cout<<"The string is not a palindrome\n";
     getch();
}
int palindrome(char p[])
{
     int n,i;
     n=strlen(p);
     for(i=0;i<n/2;i++)
	if(p[i]!=p[n-1-i])
		break;
     if(i<n/2) return 0;	// not a palindrome
     else return 1;		// palindrome
}





