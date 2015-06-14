#include<iostream.h>
#include<conio.h>
void main()
{
	unsigned long int n,sum=0,i,term;
	unsigned long int fibbo(unsigned long int);
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
		{
			term=fibbo(i);
			cout<<term<<' ';
			sum=sum+term;
		}
		cout<<"\nSum="<<sum<<'\n';
	}
	getch();
}
unsigned long int fibbo(unsigned long int i)
{
	if(i==1) return 0;
	else if(i==2) return 1;
	else
		return fibbo(i-1) + fibbo(i-2);
}