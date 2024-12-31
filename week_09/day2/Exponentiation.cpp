#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int MOD = 1e9 + 7;
void solve()
{
    int a, b;
    cin>>a>>b;

    int ans = 1 % MOD;
    while(b)
    {
        if (b&1) {
            ans = (1ll * ans % MOD * a%MOD)%MOD;
        }
        a = 1ll * a * a % MOD;
        b >>= 1;
    }
    cout<<ans<<nl;
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}