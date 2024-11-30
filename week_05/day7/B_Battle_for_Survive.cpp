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
    vector<ll> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    ll sum = vec[n-2];
    for(int i=n-3; i>=0; i--) {
        sum -= vec[i];
    }

    ll ans = vec[n-1] - sum;
    cout<<ans<<nl;
}
int main()
{
    fastIO();
    int t = 1; 
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}