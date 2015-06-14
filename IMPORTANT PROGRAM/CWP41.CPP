#include<iostream.h>
#include<conio.h>
void main()
{
	float x,term,sum;
	int i,n;
	clrscr();
	cout<<"Enter angle in degrees=";
	cin>>x;
	x=x*3.14159/180;	// convert angle from deg. to rad.
	cout<<"How many terms=";
	cin>>n;
	sum=term=x;
	for(i=2;i<=n;i++)
	{
		term=term*(-x*x)/((2*i-1)*(2*i-2));
		sum=sum+term;
	}
	cout<<"Sine of "<<x*180/3.14159<<"="<<sum<<'\n';
	getch();
}






