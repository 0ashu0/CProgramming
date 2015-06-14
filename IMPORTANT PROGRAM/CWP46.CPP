#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,x,y,i,j,k;
	clrscr();
	cout<<"Following are the four digit perfect squares\n";
	for(n=1000;n<=9999;n++)
	{
		x=n/100;
		y=n%100;

		i=int(sqrt(n));
		j=int(sqrt(x));
		k=int(sqrt(y));

		if(i*i==n&&j*j==x&&k*k==y)
			cout<<n<<"\n";
	}
	getch();
}