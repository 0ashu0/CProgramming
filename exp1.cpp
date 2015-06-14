#include<iostream>
using namespace std;
int i=1;
int main()
{
    //cout<<"hello world "<<i++<<"\n";
    cout<<"main called"<<"\n";
    i++;
    while(i<=10)
    {
        cout<<"calling"<<"\n";
        main();
    }
    cout<<"hello world "<<i++<<"\n";
}
