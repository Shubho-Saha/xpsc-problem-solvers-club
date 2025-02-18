#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x, y;
    cin>>x>>y;
    if (abs(x-y) == 0 || (abs(x-y) == 1)) {
        cout<<1<<nl;
    } else {
        int mxones = ceil(1.0*x / (y+1));
        if ((x+(-2*y)) > mxones) {
            cout<<(x+(-2*y))<<nl;
        } else {
            cout<<mxones<<nl;
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}