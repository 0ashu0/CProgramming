#include <iostream>
using namespace std;
int main() {
    int x = 6;
    int ans = 1;
    for(int i=x;i>0;i--)
        ans = ans * i;
    cout<<ans;
}

