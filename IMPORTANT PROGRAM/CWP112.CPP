#include<iostream.h>
#include<conio.h>
void main()
{
	int f[100]={0,1};
	int i,n;
	int sum=1;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n==1)
	{
		cout<<f[0]<<'\n';
		cout<<"Sum=0\n";
	}
	else
	{
		cout<<f[0]<<' '<<f[1]<<' ';
		for(i=2;i<n;i++)
		{
			f[i]=f[i-1]+f[i-2];
			cout<<f[i]<<' ';
			sum=sum+f[i];
		}
		cout<<"\nSum="<<sum<<'\n';
	}
	getch();
}

