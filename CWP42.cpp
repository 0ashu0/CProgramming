#include <iostream>
using namespace std;
int main() {
    float x=2;
    int y=2; // 0 1 +

    int ans = 1;
    for(int i=1;i<=y;i++)
        ans = ans * x;
    cout<<ans;
}
