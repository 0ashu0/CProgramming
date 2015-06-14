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
		for(i=1;i<=2*n-1;i=i+2)
			sum=sum+i;
		cout<<"Sum of first "<<n<<" odd numbers ="<<sum<<'\n';
	}
	getch();
}