#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    int iOwe = 100 - x;
    int a = iOwe/10;
    cout<<a*10<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}