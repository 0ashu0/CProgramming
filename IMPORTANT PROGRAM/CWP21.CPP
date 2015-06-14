#include<iostream.h>
#include<conio.h>
void main()
{
	int n,x,y,z,w;
	clrscr();
	cout<<"Enter three digit positive integer=";
	cin>>n;
	if(n>=100 && n<=999)
	{
		x=n/100;	// mosts significant digit
		w=n%100;
		y=w/10;		// middle digit
		z=w%10;		// least siginficant digit
		if(x*x*x+y*y*y+z*z*z==n)
			cout<<n<<" is an armstrong number\n";
		else
			cout<<n<<" is not an armstrong number\n";
	}
	else
		cout<<"Invalid data\n";
	getch();
}
