#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,x=1,n;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=1;x<=n;i++)
		{
			for(j=1;j<=i&&x<=n;j++)
			{
				cout<<x<<'\t';
				x++;
			}
			cout<<'\n';
		}
	}
	getch();
}