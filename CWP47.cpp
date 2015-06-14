#include <iostream>
using namespace std;
int main() {
    int n=10;
    int a = 0;
    int b = 1;
    int ans = 0;
    int total = 0;
    for(int i=1;i<=10;i++)
    {
        ans = a + b;
        total = total + ans;
        a = b;
        b = ans;
    }
    cout<<ans<<"\n";
    cout<<total;
}

