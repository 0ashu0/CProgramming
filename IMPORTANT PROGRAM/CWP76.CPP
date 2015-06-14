#include<iostream.h>
#include<conio.h>
void main()
{
	int n,j=2;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		while(n>1)
		{
			while(n%j==0)
			{
				cout<<' '<<j;
				n=n/j;
			}
			j++;
		}
	}
	getch();
}

