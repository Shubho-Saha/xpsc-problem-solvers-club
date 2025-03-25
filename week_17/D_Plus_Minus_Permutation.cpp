#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll g = __gcd(x, y);
    ll lc = (x*y)/g;
    ll common = n/lc;
    ll xcnt = (n/x) - common;
    ll ycnt = (n/y) - common;
    ll rem = n - xcnt;

    ll xsum = (n*(n+1)/2) - (rem*(rem+1)/2);
    ll ysum = (ycnt*(ycnt+1)/2);
    cout<<(xsum - ysum)<<nl;
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