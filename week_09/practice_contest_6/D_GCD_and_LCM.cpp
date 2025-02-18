#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll x, y, k;
    cin>>x>>y>>k;

    while(k--)
    {
        ll g = __gcd(x, y);
        if (x > y) {
            x = g;
        } else {
            y = g;
        }
        ll lc = (1ll*x*y)/__gcd(x, y);
        if (x > y) {
            x = lc;
        } else {
            y = lc;
        }
        if (x == y) {
            break;
        }
    }
    cout<<(x+y)<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}