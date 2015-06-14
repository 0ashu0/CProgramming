#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	char option;
	clrscr();
	cout<<"Enter option out of + - * or / =";
	cin>>option;
	    cout<<"Enter two integers=";
	    cin>>x>>y;
	    switch(option)
	    {
		case '+':cout<<x+y<<'\n';
			 break;
		case '-':cout<<x-y<<'\n';
			 break;
		case '*':cout<<x*y<<'\n';
			 break;
		case '/':if(y!=0) cout<<float(x)/y<<'\n';
			 else cout<<"Divide by zero error\n";
			 break;
		default:cout<<"Invalid option\n";break;
	    }
	getch();
}
