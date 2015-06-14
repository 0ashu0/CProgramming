#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int sum=0,i,n;
	clrscr();
	cout<<"How many terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
			sum=sum+int(pow(2,i));
		cout<<"Answer="<<sum<<'\n';
	}
	getch();
}