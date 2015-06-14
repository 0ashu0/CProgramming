#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,ans;
	int prime(int);
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		for(i=2;i<=n;i++)
		{
			ans=prime(i);
			if(ans==1) cout<<i<<'\t';
		}
	}
	getch();
}
int prime(int x)
{
	int j=2;
	while(x%j!=0)
		j++;
	if (x==j) return 1;
	else return 0;
}