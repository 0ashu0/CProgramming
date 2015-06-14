#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter three integers=";
	cin>>x>>y>>z;
	if(x>y)
		if(x>z)
			cout<<"Highest="<<x<<'\n';
		else
			cout<<"Highest="<<z<<'\n';
	else
		if(y>z)
			cout<<"Highest="<<y<<'\n';
		else
			cout<<"Highest="<<z<<'\n';
	getch();
}

