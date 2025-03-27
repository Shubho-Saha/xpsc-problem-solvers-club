#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;

    vector<ll> jel(n), gel(m);
    for(auto &it : jel) cin>>it;
    for(auto &it : gel) cin>>it;

    sort(all(jel));
    sort(all(gel));
    
    ll jelsum = accumulate(all(jel), 0ll);
    ll gelsum = accumulate(all(gel), 0ll);
    
    ll jelLow = jel.front();
    ll jelHi = jel.back();
    ll gelLow = gel.front();
    ll gelHi = gel.back();

    ll combineLow = min(jelLow, gelLow);
    ll combineHi = max(jelHi, gelHi);

    ll res = jelsum;
    if (jelLow < gelHi)
    {
        res = res - jelLow + gelHi;
    }
    ll even = res + combineLow - combineHi;

    if (k%2==0) {
        cout<<even<<nl;
    } else {
        cout<<res<<nl;
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