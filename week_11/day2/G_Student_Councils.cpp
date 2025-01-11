#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll k, n;
    cin>>k>>n;

    ll sum = 0;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+= v[i];
    }

    auto ok = [&](ll council) {
        ll slot = council*k;
        for(auto x : v) {
            slot -= min(x, council);
        }
        return slot <= 0;
    };

    ll l = 0, mid;
    ll r = (sum/k)+10;

    while(r>l+1)
    {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l;


    return 0;
}