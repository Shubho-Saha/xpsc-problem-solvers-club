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

    auto isGood = [&] (ll balls) {
        ll iceCream = ((balls - 1) * (balls))/2;
        return iceCream <= n;
    };

    ll l = 1;
    while(isGood(2*l)) {
        l *= 2;
    }
    
    ll r = 2*l, mid;
    while(r-l>1) {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    ll extra = n - ((l * (l-1))/2);
    cout<<l+extra<<nl;
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