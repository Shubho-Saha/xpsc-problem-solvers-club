#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, c;
    cin>>n>>c;

    vector<ll> vec;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        vec.push_back(x + (i+1));
        
    }

    sort(all(vec));
    ll count = 0;

    for(int i=0; i<n; i++) {
        if (vec[i] <= c) {
            count++;
            c -= vec[i];
        } else {
            break;
        }
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