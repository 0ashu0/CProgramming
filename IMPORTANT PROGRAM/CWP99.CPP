#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	void dec_bin(int);
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
		dec_bin(n);
	getch();
}
void dec_bin(int x)
{
	if(x>0)
	{
		dec_bin(x/2);
		cout<<x%2;
	}
}