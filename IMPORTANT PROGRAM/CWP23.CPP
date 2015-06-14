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
		if(m>=70) cout<<"Distinction\n";
		else
			if(m>=60) cout<<"First class\n";
			else
				if(m>=50) cout<<"Second class\n";
				else
					if(m>=40) cout<<"Pass\n";
					else
						cout<<"Fail\n";
	getch();
}