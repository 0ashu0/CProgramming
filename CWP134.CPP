#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    char ch;
    cout<<"enter string\n";
    gets(str);
    cout<<"enter char\n";
    cin>>ch;
    cout<<str<<"\n";
    for(int i=0;i<=strlen(str);i++)
    {
        if(ch == str[i])
            cout<<"found "<<ch<<" at position "<<i<<"\n";
        /*
        if(ch == str[i])
            cout<<"^";
        else
            cout<<" ";
        */
    }
}

