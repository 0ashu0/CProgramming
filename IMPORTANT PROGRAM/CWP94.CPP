#include<iostream.h>
#include<conio.h>
void main()
{
	float x;
	int y;
	float power(float,int);
	clrscr();
	cout<<"Enter one float value=";
	cin>>x;
	cout<<"Enter one non negative integer=";
	cin>>y;
	if(y<0) cout<<"Invalid data\n";
	else
		if(x==0)
			if(y==0)
				cout<<"Answer not defined\n";
			else
				cout<<"Answer=0\n";
		else
			cout<<"Answer="<<power(x,y)<<'\n';
	getch();
}
float power(float x,int y)
{
	if(y>0)
		return x*power(x,y-1);
	else
		return 1;
}
