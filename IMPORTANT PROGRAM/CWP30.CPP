#include<iostream.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	cout<<"Enter a character=";
	cin>>x;
	switch(x)
	{
		case 'r':
		case 'R':cout<<"Red\n";
			 break;
		case 'g':
		case 'G':cout<<"Green\n";
			 break;
		case 'b':
		case 'B':cout<<"Blue\n";
			 break;
		case 'y':
		case 'Y':cout<<"Yellow\n";
			 break;
		default:cout<<"Unknown colour\n";
			break;
	}
	getch();
}