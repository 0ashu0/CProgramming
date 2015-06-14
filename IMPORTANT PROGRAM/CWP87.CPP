#include<iostream.h>
#include<conio.h>
void main()
{
	int n,ans;
	int armstrong(int);
	clrscr();
	cout<<"Following are all three digit armstrong numbers\n";
	for(n=100;n<=999;n++)
	{
		ans=armstrong(n);
		if(ans==1) cout<<n<<'\n';
	}
	getch();
}
int armstrong(int n)
{
	int x,y,z,w;
	x=n/100;
	w=n%100;
	y=w/10;
	z=w%10;
	if(x*x*x+y*y*y+z*z*z==n) return 1;
	else return 0;
}
