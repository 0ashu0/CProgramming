#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	void fun(int);
	cout<<"Enter one positive integer=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
		fun(n);
}
void fun(int x)
{
	cout<<x<<' ';
	if(x>1)
	    if(x%2==1)
		fun(3*x+1);
	    else
		fun(x/2);
}
