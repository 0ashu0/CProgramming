#include<iostream.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	cout<<"Enter a digit that represents a reading on dice=";
	cin>>x;
	switch(x)
	{
		case 1:
		case 3:
		case 5:cout<<"Odd number\n";
		       break;
		case 2:
		case 4:
		case 6:cout<<"Even number\n";
		       break;
		default:cout<<"Faulty dice\n";
			break;
	}
	getch();
}
