#include<iostream>
using namespace std;
int main()
{
    int x = 15;
    void parse(int);
    parse(x);
}

void parse(int number)
{
    if(number>0)
        {
            parse(number/2);
            cout<<number%2;
        }
}
