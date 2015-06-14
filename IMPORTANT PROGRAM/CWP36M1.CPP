#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	float sum=0;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
			sum=sum+float(2*i-1)/(2*i);
		cout<<"Answer="<<sum<<'\n';
	}
	getch();
}