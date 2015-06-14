#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int x=4;
    int answer = factorial(x);
    cout<<answer;
}

int factorial(int x)
{
    if(x>0)
        return x*factorial(x-1);
    else
        return 1;
}
