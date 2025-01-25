#include <bits/stdc++.h>
#define ll long long int
// #define int long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    ll g = 0;
    for(int i=0; i<n-1; i++) {
        g = __gcd(g, abs(v[n-1]-v[i]));
    }
    if (g == 0) {
        cout<<1<<nl;
        return;
    }

    ll extra = v[0] - g;
    ll opcnt = 0;
    for(int i=1; i<n; i++) {
        if (v[i]-g != v[i-1]) {
            extra = v[i] - g;
        }
        opcnt += abs((v[n-1] - v[i-1])/g);
    }

    opcnt += (abs(v[n-1] - extra))/g;
    cout<<opcnt<<nl;
    

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