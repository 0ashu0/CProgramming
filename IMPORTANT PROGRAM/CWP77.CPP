#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,option;
	do
	{
	    clrscr();
	    cout<<"1:Add\n";
	    cout<<"2:Subtract\n";
	    cout<<"3:Multiply\n";
	    cout<<"4:Divide\n";
	    cout<<"5:Quit\n";
	    cout<<"Enter your option=";
	    cin>>option;
	    if(option>=1&&option<=4)
	    {
		cout<<"Enter two integers=";
		cin>>x>>y;
		switch(option)
		{
		    case 1:cout<<x+y<<'\n';break;
		    case 2:cout<<x-y<<'\n';break;
		    case 3:cout<<x*y<<'\n';break;
		    case 4:if(y!=0) cout<<float(x)/y<<'\n';
			   else cout<<"Divide by zero error\n";
			   break;
		}
		getch();
	    }
	}
	while(option!=5);
}