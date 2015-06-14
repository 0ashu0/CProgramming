#include<iostream.h>
#include<conio.h>
void main()
{
	int n1,n2,gcd,i,min;
	clrscr();
	cout<<"Enter two positive integers=";
	cin>>n1>>n2;
	if(n1<=0||n2<=0) cout<<"Invalid data\n";
	else
	{
		if(n1<n2) min=n1;
		else min=n2;

		for(i=1;i<=min;i++)
		    if(n1%i==0&&n2%i==0)
			gcd=i;

		cout<<"GCD of "<<n1<<" and "<<n2<<"="<<gcd<<'\n';
		cout<<"LCM of "<<n1<<" and "<<n2<<"="<<n1*n2/gcd<<'\n';
	}
	getch();
}
