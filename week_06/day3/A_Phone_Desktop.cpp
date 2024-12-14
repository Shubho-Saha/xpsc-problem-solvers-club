#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x, y;
    cin>>x>>y;

    int yscreen = y/2 + y%2;
    int remcell = (yscreen*15) - (y*4);
    if (remcell >= x) {
        cout<<yscreen<<nl;
    } else {
        int xremains = x - remcell;
        int ans = yscreen + ceil(xremains*1.0/15);
        cout<<ans<<nl;
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