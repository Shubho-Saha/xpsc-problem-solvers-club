#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> v(k);
    for(int i=0; i<k; i++) {
        cin>>v[i];
    }

    sort(all(v));

    auto isGood = [&] (int idx) {
        ll time = 0;
        for(int i=idx; i<k; i++) {
            time += n-v[i];
        }

        return time <= n-1;
    };

    int l=-1, r=k-1, mid;
    while(r-l > 1)
    {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<k-r<<nl;
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