#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int x=123;
	cout<<x<<endl;
	cout<<setw(6)<<x<<endl;
	cout<<setw(4)<<x<<endl;
	cout<<setw(6)<<setfill('0')<<x<<endl;
	cout<<setw(4)<<setfill('$')<<x<<endl;
	cout<<setfill('$')<<setw(4)<<x<<endl;
	cout<<setw(2)<<x<<endl;
}
