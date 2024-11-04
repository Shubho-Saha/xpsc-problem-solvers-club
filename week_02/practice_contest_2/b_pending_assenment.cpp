#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll x, y, z;
    cin>>x>>y>>z;

    ll Rmins = x * y;
    ll zmin = z * 24 * 60;

    if (zmin >= Rmins)
        cout<<"yes"<<nl;
    else cout<<"no"<<nl;
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