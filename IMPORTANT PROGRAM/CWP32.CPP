#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;i<=n;i++)
			sum=sum+i;
		cout<<"Sum of first "<<n<<" positive integers="<<sum<<'\n';
	}
	getch();
}