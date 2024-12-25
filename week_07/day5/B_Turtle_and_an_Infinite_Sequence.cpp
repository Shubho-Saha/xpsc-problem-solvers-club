#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;

    ll small = max(0LL, n-m), big = n+m;
    ll ans = 0;
    ll diff = big - small;

    for(int k=0; k<=30; k++)
    {
        if (diff >= (1<<k)) {
            ans |= (1<<k);
        } else {
            ll block1 = small/(1<<k);
            ll block2 = big/(1<<k);
            if (block1 != block2) {
                ans |= (1<<k);
            } else {
                if (block1 % 2 != 0) {
                    ans |= (1<<k);
                }
            }
        }
    }

    cout<<ans<<nl;
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