#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	int sum(int);
	clrscr();
	cout<<"Enter one positive value=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
		cout<<"Answer="<<sum(n)<<'\n';
	getch();
}
int sum(int x)
{
	if(x>0)
		return x%10 + sum(x/10);
	else
		return 0;
}

