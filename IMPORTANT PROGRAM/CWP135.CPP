#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
     char str[80];
     int n,i,vc=0,cc=0,dc=0,oc=0;

     clrscr();
     cout<<"Enter a string=";
     gets(str);

     n=strlen(str);

     for(i=0;i<n;i++)
       if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
	 if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
	    ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		vc++;
	 else
		cc++;
       else
	 if(str[i]>='0'&&str[i]<='9')
		dc++;
	 else
		oc++;

     cout<<"Number of vowels="<<vc<<'\n';
     cout<<"Number of consonants="<<cc<<'\n';
     cout<<"Number of digits="<<dc<<'\n';
     cout<<"Number of other characters="<<oc<<'\n';

     getch();
}




