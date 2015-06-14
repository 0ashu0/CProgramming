#include <iostream>
using namespace std;
int power(int index)
{
    int i;
    int sol = 1;
    for(i=1;i<=index;i++)
        sol = sol*2;
    return sol;
}
int main() {
    int x = 6;
    int ret = 0;
    int ans  = 0;
    for(int i=1;i<=x;i++)
    {
        ret = power(i);
        cout<<ret<<"\n";
        ans = ans + ret;
    }
    cout<<ans;
}


