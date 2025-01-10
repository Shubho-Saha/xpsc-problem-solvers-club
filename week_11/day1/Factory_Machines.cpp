#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto ok = [&](ll seconds) {
        ll cnt = 0;
        for(int i=0; i<n; i++) {
            cnt += seconds/v[i];
            if (cnt >= t) return true;
        }
        return false;
    };

    ll l=0, r = 1e18, mid, ans;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout<<ans<<nl;

    return 0;
}