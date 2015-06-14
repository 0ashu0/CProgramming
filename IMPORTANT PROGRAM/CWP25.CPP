#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
		if(n%5==0)
			if(n%7==0)
				cout<<n<<" is divi. by 5 and divi. by 7\n";
			else
				cout<<n<<" is divi. by 5 and not divi. by 7\n";
		else
			if(n%7==0)
				cout<<n<<" is not divi. by 5 and divi. by 7\n";
			else
				cout<<n<<" is not divi. by 5 and not divi. by 7\n";
	getch();
}