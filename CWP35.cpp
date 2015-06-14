#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter one number";
    cin>>x;
    int total = 0;
    int even = 0;
    int odd = 0;
    for(int i=1;i<=x;i++)
        {
            if(i%2==0)
                even = even + i;
            else
                odd = odd + i;
        }
    cout<<"even is "<<even;
    cout<<"odd is "<<odd;
    cout<<"total is "<<even - odd;
}

