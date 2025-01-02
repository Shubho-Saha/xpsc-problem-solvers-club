#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    ll mxgcd = 0;
    ll crnt = 0;
    for(int i=0; i<n-1; i++) {
        crnt += v[i];
        ll g = __gcd(crnt, (sum-crnt));
        mxgcd = max(mxgcd, g);
    }
    cout<<mxgcd<<nl;
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