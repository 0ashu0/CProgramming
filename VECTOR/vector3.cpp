#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> arr;
    char c = 0;
    while(c != 'x')
    {
        cin>>c;
        arr.push_back(c);
    }

    for(vector<char>::iterator i=arr.begin(); i!=arr.end(); i++)
        cout<<*i;
}
