#include<iostream.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	cout<<"Enter marks out of 100=";
	cin>>m;
	if(m<0||m>100) cout<<"Invalid marks\n";
	else
	{
		if(m>=70) cout<<"Distinction\n";
		if(m>=60&&m<70) cout<<"First class\n";
		if(m>=50&&m<60) cout<<"Second class\n";
		if(m>=40&&m<50) cout<<"Pass\n";
		if(m<40) cout<<"Fail\n";
	}
	getch();
}