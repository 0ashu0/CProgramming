#include<iostream.h>
#include<conio.h>
void main()
{
	int term=2,sum=2,i,n;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=2;i<=n;i++)
		{
			term=term*2;
			sum=sum+term;
		}
		cout<<"Answer="<<sum<<'\n';
	}
	getch();
}