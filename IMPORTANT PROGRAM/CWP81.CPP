#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z,max;
	clrscr();
	cout<<"Enter three integers=";
	cin>>x>>y>>z;
	max=x>y?x>z?x:z:y>z?y:z;
	cout<<"Highest="<<max<<'\n';
	getch();
}
