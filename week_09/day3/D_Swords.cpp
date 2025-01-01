#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n;
    cin>>n;
    vector<ll> vec(n);
    ll mxNum = -1, sum = 0;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        mxNum = max(mxNum, vec[i]);
    }

    ll g = 0;
    for(int i=0; i<n; i++) {
        ll x = mxNum - vec[i];
        g = __gcd(g, x);
        sum += x;
    }

    ll y = sum / g;
    cout<<y<<" "<<g;

    return 0;
}