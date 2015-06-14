#include<iostream.h>
#include<conio.h>
void main()
{
	int digit;
	clrscr();
	cout<<"Enter one digit=";
	cin>>digit;
	switch(digit)
	{
		case 2:
		case 3:
		case 6:
		case 7:cout<<"Welcome\n";
		       break;
		case 1:
		case 4:
		case 5:
		case 8:cout<<"Hello\n";
		       break;
		case 0:
		case 9:cout<<"Hi\n";
		       break;
		default:cout<<"Get out\n";
			break;
	}
	getch();
}
