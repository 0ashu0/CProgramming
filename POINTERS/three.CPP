#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int i, *y;
    y=a;
    cout<<a;
    for(i=0;i<5;i++)
		cout<<y[i]<<'\t';
	cout<<"\n";
	for(i=0;i<5;i++)
        cout<<i[a]<<'\n';
}
