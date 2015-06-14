#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,sign=1;
	clrscr();
	cout<<"Enter number of terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
	    for(i=1;i<=n;i++)
	    {
		sum=sum+i*sign;
		sign=-sign;
	    }
	    cout<<"Answer="<<sum<<'\n';
	}
	getch();
}

