#include<iostream>
using namespace std;
int main()
{
    int power(float, int);
    float x;
    int y;
    cin>>x>>y;
    int answer = power(x,y);
    cout<<answer;
}

int power(float x, int y)
{
    if(y>0)
        return x*power(x,y-1);
    else
        return 1;
}
