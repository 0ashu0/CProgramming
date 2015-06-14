#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> integers{ 3, 4, 56, 6, 778 };

for( vector<int>::iterator it = integers.begin() ; it != integers.end() ; ++it )
       {*it = 4;  cout << *it << endl; }

for( vector<int>::const_iterator it = integers.begin() ; it != integers.end() ; ++it )
       { cout << *it << endl; }
}

