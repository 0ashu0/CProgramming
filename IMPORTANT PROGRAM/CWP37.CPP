#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n;
	unsigned long int fact=1;
	clrscr();
	cout<<"Enter one positive integer whose factorial is to be found=";
	cin>>n;
	if(n<0) cout<<"Factorial of negative number is not possible\n";
	else
		if(n==0) cout<<"Factorial of 0=1\n";
		else
		{
			for(i=1;i<=n;i++)
				fact=fact*i;
			cout<<"Factorial of "<<n<<"="<<fact<<'\n';
		}
	getch();
}
