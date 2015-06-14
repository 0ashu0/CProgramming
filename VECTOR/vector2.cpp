#include<iostream>
#include<vector>
using namespace std;

int main()
/*
{
    typedef vector<int> vector_int;
    vector_int v;

    size_t size = 10;
    int sarray[10];
    int *darray = new int[size];

    for(int i=0;i<10;i++)
    {
        sarray[i] = i;
        darray[i] = i;
    }
    for(int i=0;i<10;i++)
    {
        cout<<sarray[i];
        cout<<darray[i];
    }
    delete[] darray;
}
*/

{
    size_t size = 10;

    //make room for 10 int, and initialize them to 0
    vector<int> Myarray(size);

    //do something with them
    for(int i=0;i<size;i++)
        Myarray[i]=i;

    for(int i=0;i<size;i++)
        cout<<Myarray[i];
}
