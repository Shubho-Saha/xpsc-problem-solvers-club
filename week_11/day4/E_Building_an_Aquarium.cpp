#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto isGood = [&](int height) {
        ll water = 0;
        for(int i=0; i<n; i++) 
        {
            water += max(0, (height-v[i]));
        }

        return water <= x;
    };


    int l=0, r=2e9+100, mid;
    while(r-l > 1)
    {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l<<nl;
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