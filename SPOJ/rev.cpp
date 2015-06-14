#include<iostream>
using namespace std;
int main()
{
    int x=1234;
    reversing(x);
}

int reversing(int number)
{
    if(number / 10==0)
        return ;
    else
        return 10 * reversing(number%10);
}

