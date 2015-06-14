#include <iostream>
using namespace std;
/*
int main() {
    int x;
    cout<<"enter one number";
    cin>>x;
    float ans;
    for(int i = 1;i<=x;i = i+2)
        ans = ans + (float)i/(i+1);
    cout<<ans;
}
*/
int main() {
    int x;
    cout<<"enter one number";
    cin>>x;
    float ans;
    for(int i=1;i<=(2*x);i=i+2)
        ans = ans + (float)i/(i+1);
    cout<<ans;
}
