#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,j=1,k=2;
	float sum=0;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+float(j)/k;
			j=j+2;
			k=k+2;
		}
		cout<<"Answer="<<sum<<'\n';
	}
	getch();
}