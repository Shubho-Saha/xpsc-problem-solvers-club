#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        int a = v[i];
        int low = l - a;
        int high = r - a;
        auto leftIt = lower_bound(v.begin()+i+1, v.end(), low);
        auto rightIt = upper_bound(v.begin()+i+1, v.end(), high);
        ans += (rightIt - leftIt);
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