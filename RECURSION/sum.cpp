#include<iostream>
using namespace std;
int main()
{
    int sum(int);
    int x = 5;
    int answer = sum(5);
    cout<<answer;
}

int sum(int num)
{
    if(num>0)
        return num + sum(num - 1);
    else
        return 0;
}
