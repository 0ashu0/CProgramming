#include<iostream.h>
#include<conio.h>
void main()
{
	int i,f=0,s=1,t,n,sum=1;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		if(n==1)
		{
			cout<<f<<'\n';
			cout<<"Sum=0\n";
		}
		else
		{
			cout<<f<<' '<<s<<' ';
			for(i=3;i<=n;i++)
			{
				t=f+s;
				cout<<t<<' ';
				sum=sum+t;
				f=s;
				s=t;
			}
			cout<<"\nSum="<<sum<<'\n';
		}
	}
	getch();
}

