#include<iostream>
using namespace std;
int main()
{
    int x=7,y;
    cout<<"x ="<<x<<"\n";
    cout<<"y ="<<y<<"\n";
    cout<<"&x ="<<&x<<"\n";
    cout<<"&y ="<<&y<<"\n";
    int *p, *q;
    cout<<"p ="<<p<<"\n";
    cout<<"q ="<<q<<"\n";
    cout<<"*p ="<<*p<<"\n";
    cout<<"*q ="<<*q<<"\n";
    p = &x;
    q = &y;
    cout<<"p ="<<p<<"\n";
    cout<<"q ="<<q<<"\n";
    cout<<"*p ="<<*p<<"\n";
    cout<<"*q ="<<*q<<"\n";
    *q = *p + 100;

    cout<<"x ="<<x<<"\n";
    cout<<"y ="<<y<<"\n";
    cout<<"p ="<<p<<"\n";
    cout<<"q ="<<q<<"\n";
    cout<<"*p ="<<*p<<"\n";
    cout<<"*q ="<<*q<<"\n";
    cout<<"&x ="<<&x<<"\n";
    cout<<"&y ="<<&y<<"\n";
}
