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
    ll one = 0, zero=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] == 0) zero++;
        if (v[i] == 1) one++;
    }

    cout<<((1ll<<zero) * (one))<<nl;
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


// https://codeforces.com/contest/1582/problem/B