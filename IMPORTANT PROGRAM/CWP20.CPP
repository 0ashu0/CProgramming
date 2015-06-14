#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data";
	else
		if(n%10==7) cout<<n<<" ends with 7";
		else
			cout<<n<<" is not ending with 7";
	getch();
}
