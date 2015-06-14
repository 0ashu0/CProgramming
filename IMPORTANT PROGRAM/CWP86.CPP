#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h,i,m1,m2,m3,m;
	int highest(int,int,int);
	clrscr();
	cout<<"Enter 9 integers=";
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	m1=highest(a,b,c);
	m2=highest(d,e,f);
	m3=highest(g,h,i);
	m=highest(m1,m2,m3);
	cout<<"Highest="<<m<<'\n';
	getch();
}
int highest(int x,int y,int z)
{
	return x>y?x>z?x:z:y>z?y:z;
}