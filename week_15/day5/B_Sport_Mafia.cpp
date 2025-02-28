#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, k;
    cin>>n>>k;

    auto ok=[&](ll ate)
    {
        ll remAc = n - ate;
        ll cnt = (remAc * (remAc+1))/2;
        cnt = cnt - ate;
        if (cnt >= k) return true;
        return false; 

    };

    ll l=0, r=n;
    while(r-l>1)
    {
        ll mid = l + (r-l)/2;
        if (ok(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l<<nl;

    return 0;
}