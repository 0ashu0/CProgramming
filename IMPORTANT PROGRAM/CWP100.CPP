#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	void reverse(int);
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
		reverse(n);
	getch();
}
void reverse(int x)
{
	if(x>0)
	{
		cout<<x%10;
		reverse(x/10);
	}
}

