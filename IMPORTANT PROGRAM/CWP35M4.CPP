#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"Enter number of terms=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	     if(n%2==0) cout<<"Answer="<<-n/2<<'\n';
	     else cout<<"Answer="<<(n+1)/2<<'\n';
	getch();
}

