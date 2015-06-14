#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	char option;
	do
	{
	    clrscr();
	    cout<<"+:Add\n";
	    cout<<"-:Subtract\n";
	    cout<<"*:Multiply\n";
	    cout<<"/:Divide\n";
	    cout<<"Q or q:Quit\n";
	    cout<<"Enter your option=";
	    cin>>option;
	    if(option=='+'||option=='-'||option=='*'||option=='/')
	    {
		cout<<"Enter two integers=";
		cin>>x>>y;
		switch(option)
		{
		    case '+':cout<<x+y<<'\n';break;
		    case '-':cout<<x-y<<'\n';break;
		    case '*':cout<<x*y<<'\n';break;
		    case '/':if(y!=0) cout<<float(x)/y<<'\n';
			     else cout<<"Divide by zero error\n";
			     break;
		}
		getch();
	    }
	}
	while(option!='Q' && option!='q');
}