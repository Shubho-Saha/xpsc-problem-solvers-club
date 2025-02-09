#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, c, d;
    cin>>n>>c>>d;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v), greater<>());
    ll sum = 0;
    for(int i=0; i<min(d, n); i++) {
        sum += v[i];
    }
    

    auto good = [&](ll k)
    {
        ll remDay = d;
        ll reward = 0; ll cnt = 0, idx = 0;
        while(remDay--)
        {
            if(idx <n) {
                reward += v[idx];
            }       
            idx++, cnt++;
            if (cnt == k+1) {
                idx = 0;
                cnt = 0;
            } 

        }
        return reward >= c;
    };

    if (sum >= c) {
        cout<<"Infinity"<<nl;
    } else if (v[0]*d < c) {
        cout<<"Impossible"<<nl;
    }
    else
    {
        ll l = 0, r=d+10, mid;
        while(r-l > 1)
        {
            mid = l + (r-l)/2;
            if (good(mid)) {
                l = mid;
            } else {
                r = mid;
            }
        }
        cout<<l<<nl;

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