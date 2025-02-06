#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    map<ll, ll> mp;
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
        mp[v[i]]++;
    }

    double avg = sum*1.0 / n;
    double target = avg * 2;
    ll x = target;
    if (target != x) {
        cout<<0<<nl;
    } else {
        ll cnt = 0;
        for(auto [key, val] : mp) {
            ll need = target - key;
            if (mp.count(need) != 0) {
                if (need != key) {
                    cnt += (val * mp[need]);
                    mp[key] = 0;
                    mp[need] = 0;
                } else {
                    ll z = (val*(val-1)*1ll)/2;
                    cnt += z;
                    mp[key] = 0;
                }
            }
        }

        cout<<cnt<<nl;
    }
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