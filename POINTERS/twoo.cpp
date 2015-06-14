#include<iostream>
using namespace std;
int main()
{
    int x=7;
    cout<<"x ="<<x<<"\n";
    cout<<"&x ="<<&x<<"\n";
    int *p;
    cout<<"*p ="<<*p<<"\n";
    int **q;
    //cout<<"**q ="<<**q<<"\n";
    p = &x;
    cout<<"p ="<<p<<"\n";
    cout<<"&x ="<<&x<<"\n";
    cout<<"&p ="<<&p<<"\n";
    q= &p;
    cout<<"q ="<<q<<"\n";

    int abc = 10;
    int *def;
    def = &abc;
    cout<<def;
}
