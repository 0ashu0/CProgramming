#include<iostream>
using namespace std;
int main()
{
	int x=7,y=5;
	void swap(int &,int &);
	cout<<"before swap\n";
	cout<<"x "<<x<<" y "<<y<<'\n';
	swap(x,y);					// passed the addresses of the variables
	cout<<"After exchange\n";
	cout<<"x "<<x<<" y "<<y<<'\n';
}

void swap(int &p,int &q)			// passed addresses are saved in pointer to int
{                                   // swapping variable at discovered locations
    int temp;
    temp = q;
    q = p;
    p = temp;
}
