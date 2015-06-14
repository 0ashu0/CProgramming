#include<iostream.h>
#include<conio.h>
void main()
{
	int add(int,int);
	int mul(int,int);
	int sub(int,int);
	int (*pf)(int,int);
	int option,x,y;
	clrscr();
	cout<<"Enter two integers=";
	cin>>x>>y;
	cout<<"Enter option=";
	cin>>option;
	switch(option)
	{
		case 1:pf=add;break;
		case 2:pf=sub;break;
		case 3:pf=mul;break;
	}
	if(option>=1&&option<=3) cout<<"Answer="<<(*pf)(x,y)<<'\n';
	else cout<<"Invalid option\n";
}
int add(int p,int q)
{
	return p+q;
}
int sub(int p,int q)
{
	return p-q;
}
int mul(int p,int q)
{
	return p*q;
}
