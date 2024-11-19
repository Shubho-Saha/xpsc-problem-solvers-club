#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b, n;
        cin>>a>>b>>n;

        ll ans = 0;
        for(ll i=0; i<n; i++) {
            ll x;
            cin>>x;
            if (x >= a) {
                ans += (a-1);
            } else {
                ans += x;
            }
        }
        ans += b;
        cout<<ans<<nl;
    }

    return 0;
}