#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    ll n, m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    if (n > m) {
        cout<<"NO"<<nl;
        return;
    }
    
    sort(all(v));
    ll sum = n;
    for(int i=0; i<n; i++) {
        if (i== (n-1)) {
            sum += max(v[i], v[0]);
        } else {
            sum += max(v[i], v[i+1]);
        }
    }

    if (sum <= m) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
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

// https://codeforces.com/problemset/problem/1668/b