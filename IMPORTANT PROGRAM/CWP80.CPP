#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	unsigned long int fact=1;
	clrscr();
	cout<<"Enter one integer whose factorial is to be found=";
	cin>>n;
	if(n<0) cout<<"Factorial of negative number is not possible\n";
	else
	     if(n==0) cout<<"Factorial of 0 = 1\n";
	     else
	     {
		    i=1;
		abc:fact=fact*i;
		    i++;
		    if(i<=n) goto abc;
		    cout<<"Factorial of "<<n<<"="<<fact<<'\n';
	     }
	getch();
}

