#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter one number";
    cin>>x;
    int total = 0;
    for(int i=1;i<=x;i = i+2)
        total = total + i;
    cout<<"total is "<<total;
}

