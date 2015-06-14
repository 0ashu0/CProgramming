#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum1=0,sum2=0;
	clrscr();
	cout<<"Enter number of terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
	    for(i=1;i<=n;i=i+2)
		  sum1=sum1+i;
	    for(i=2;i<=n;i=i+2)
		  sum2=sum2+i;
	    cout<<"Answer="<<sum1-sum2<<'\n';
	}
	getch();
}

