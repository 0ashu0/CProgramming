#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data";
	else
		if(n%7==0) cout<<n<<" is divisible by 7\n";
		else
			cout<<n<<" is not divisible by 7\n";
	getch();
}
