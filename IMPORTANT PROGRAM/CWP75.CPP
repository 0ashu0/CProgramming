#include<iostream.h>
#include<conio.h>
void main()
{
	int n,count=0;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
	     while(n>1)
	     {
		cout<<n<<'\t';
		if(n%2==0) n=n/2;
		else n=3*n+1;
		count++;
	     }
	     cout<<n<<'\n';
	     cout<<"Number of iterations="<<count<<'\n';
	}
	getch();
}

