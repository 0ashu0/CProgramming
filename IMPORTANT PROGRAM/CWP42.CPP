#include<iostream.h>
#include<conio.h>
void main()
{
	int y,i;
	float x,ans=1;
	clrscr();
	cout<<"Enter base value and power value=";
	cin>>x>>y;
	if(y==0)
		if(x==0) cout<<"Answer not defined\n";
		else cout<<"Answer=1\n";
	else
	    if(y>0)
		if(x==0) cout<<"Answer=0\n";
		else
		{
			for(i=1;i<=y;i++)
				ans=ans*x;
			cout<<"Answer="<<ans<<'\n';
		}
	    else
		if(x==0) cout<<"Answer=infinity\n";
		else
		{
			for(i=1;i<=-y;i++)
				ans=ans*x;
			cout<<"Answer="<<1/ans<<'\n';
		}
	getch();
}