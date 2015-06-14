#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	int ack(int,int);
	clrscr();
	cout<<"Enter two non negative integers=";
	cin>>x>>y;
	if(x<0 || y<0)
		cout<<"Invlaid data\n";
	else
		cout<<"Answer="<<ack(x,y)<<'\n';
	getch();
}
int ack(int m,int n)
{
	if(m==0)
		return n+1;
	else
	if(n==0 && m>0)
		return ack(m-1,1);
	else
		return ack(m-1,ack(m,n-1));
}
