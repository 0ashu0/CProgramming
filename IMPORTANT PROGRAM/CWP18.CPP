#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"Enter one positive integer=\n";
	cin>>n;
	if(n<=0) cout<<"Invalid data";
	else
		if(n%2==0) cout<<n<<" is even\n";
		else
			cout<<n<<" is odd\n";
	getch();
}
