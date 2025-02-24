#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    for(int i=1; i<=n; i++) {
        int x; 
        cin>>x;
        mp[x-i]++;
    }

    ll res = 0;
    for(auto [key, val] : mp) {
        res += (1ll * val * (val-1))/2;
    }
    cout<<res<<nl;
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