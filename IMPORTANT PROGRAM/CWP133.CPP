#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[80],x;
	int i,n,count=0;
	clrscr();
	cout<<"Enter a string=";
	gets(str);
	cout<<"Enter a character to be searched=";
	cin>>x;
	n=strlen(str);

	for(i=0;i<n;i++)
	    if(str[i]==x)
		count++;

	if(count==0) cout<<x<<" is not present\n";
	else cout<<x<<" is present "<<count<<" times\n";
	getch();
}
