#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, q;
    cin>>n>>q;
    vector<ll> presum, vec(n);

    ll sum = 0, mxVal = -1;
    for(int i=0; i<n; i++) {
        ll x; cin>>x;
        mxVal = max(mxVal, x);
        vec[i] = mxVal;

        ll crntSum = sum + x;
        presum.push_back(crntSum);
        sum = presum.back();
    }

    while(q--)
    {
        ll key; cin>>key;
        int l=0, r=n-1, mid, ans = -1;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            if (vec[mid] <= key) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid -1;
            }
        }

        if (ans == -1) {
            cout<<0<<" ";
        } else {
            cout<<presum[ans]<<" ";
        }

    }
    cout<<nl;
    
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