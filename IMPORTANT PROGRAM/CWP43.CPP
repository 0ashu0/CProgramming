#include<iostream.h>
#include<conio.h>
void main()
{
	float p,r,ans=1;
	int n,i;
	clrscr();
	cout<<"Enter principal amount, period and rate of interest=";
	cin>>p>>n>>r;
	if(p<=0||n<=0||r<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
			ans=ans*(1+r/100);
		cout<<"Final amount="<<p*ans<<'\n';
	}
	getch();
}