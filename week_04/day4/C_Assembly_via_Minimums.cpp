#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    ll b = (n * (n-1))/2;
    vector<ll> vec(b);

    for(ll i=0; i<b; i++) {
        cin>>vec[i];
    }

    sort(all(vec));

    for(int i=0; i<b; i += --n) {
        cout<<vec[i]<<" ";
    }
    cout<<vec[b-1];
    cout<<nl;
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