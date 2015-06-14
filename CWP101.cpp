#include<iostream>
using namespace std;
int even(int);
int odd(int);
int main()
{
    int x = 157;

    if((x&1)==0)
        even(x);
    else
        odd(x);
}

int even(int number)
{
    cout<<"even "<<number<<"\n";
    if(number>1)
        if(number%2==0)
            even(number/2);
        else
            odd( (number*3) + 1);
    else
        return 1;
}

int odd(int number)
{
    cout<<"odd "<<number<<"\n";
    if(number>1)
        if(number%2==0)
            even(number/2);
        else
            odd( (number*3)+1 );
    else if(number == 1)
        return 1;
}
