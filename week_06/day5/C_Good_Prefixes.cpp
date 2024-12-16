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
    ll preSum = 0;
    ll mxVal = -1;

    int count = 0;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mxVal = max(mxVal, x);
        preSum += x;

        if ((preSum-mxVal) == mxVal) count++;
    }

    cout<<count<<nl;
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