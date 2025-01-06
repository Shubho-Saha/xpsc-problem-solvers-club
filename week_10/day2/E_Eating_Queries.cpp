#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    sort(all(v), greater<>());
    vector<ll> presum;
    presum.push_back(v[0]);
    for(int i=1; i<n; i++) {
        ll newSum = presum.back() + v[i];
        presum.push_back(newSum);
    }
    
    while(k--)
    {
        int target; cin>>target;
        int ans = -2;
        int l = 0, r=n-1, mid;

        while(l<=r)
        {
            mid = l + (r-l)/2;
            if (presum[mid] >= target) {
                ans = mid;
                r = mid -1;
            } else {
                l = mid + 1;
            }
        }

        cout<<ans+1<<nl;
    }
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