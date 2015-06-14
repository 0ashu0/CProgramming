#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	cout<<"Enter number of terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
	    for(i=1;i<=n;i++)
	       if(i%2==1)
		  sum=sum+i;
	       else
		  sum=sum-i;
	    cout<<"Answer="<<sum<<'\n';
	}
	getch();
}

