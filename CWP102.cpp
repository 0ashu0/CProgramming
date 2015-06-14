#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        cin>>a[i];
    cout<<"enter shit";
    int shit = 0;
    cin>>shit;
    for(i=0;i<10;i++)
        if(shit == a[i])
        {
            cout<<"O_O mila bc at "<<i<<" th place\n";
          //  break;
        }
    cout<<i;
}
