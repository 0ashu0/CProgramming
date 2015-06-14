#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z,w,n;
	clrscr();
	cout<<"Following are all three digit armstrong numbers\n";
	for(n=100;n<=999;n++)
	{
		x=n/100;	// most significant digit
		w=n%100;
		y=w/10;		// middle digit
		z=w%10;		// least significant digit

		if(x*x*x+y*y*y+z*z*z==n)
			cout<<n<<'\n';
	}
	getch();
}