#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"enter string\n";
    gets(str);
    int length = strlen(str);
    int i=0, count = 0;
    for(i=0;i<=length;i++)
    {
        if(str[i] == ' ')
            count++;
        if(str[i] == '\0')
            count++;
    }
    cout<<count;
}


