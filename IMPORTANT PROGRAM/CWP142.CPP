#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[80],s2[80];
	int i,j,n1,n2,count=0;
	clrscr();
	cout<<"Enter main string=";
	gets(s1);
	cout<<"Enter substring string=";
	gets(s2);

	n1=strlen(s1);
	n2=strlen(s2);

	for(i=0;i<=n1-n2;i++)
	{
	   for(j=0;j<n2;j++)
		if(s1[i+j]!=s2[j])
			break;
	   if(!(j<n2))
	   {
		cout<<"Position="<<i<<'\n';
		count++;
	   }
	}
	if(count==0) cout<<"Substring is not present in main string\n";
	getch();
}