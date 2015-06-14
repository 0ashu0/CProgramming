#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> foo(3,0);
    vector<int> bar(5,0);
    bar = foo;
    foo = vector<int>();

    cout<<"size of foo: "<<int(foo.size())<<'\n';
    cout<<"size of bar: "<<int(bar.size())<<'\n';
}
