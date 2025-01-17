#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll lastElem = k+n-1;
    ll totalSum = (k + k+n-1) * n / 2;

    auto getSum = [&](ll mid)
    {
        ll count = lastElem - mid + 1;
        ll sum = (mid + lastElem) * count/2;
        return sum;
    };
    
    ll l = k, r = k+n-1, mid;
    ll ans = LLONG_MAX;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        ll sum2 = getSum(mid);
        ll sum1 = totalSum - sum2;
        ans = min(ans, abs(sum1- sum2));
        if (sum2 < sum1) {
            r = mid -1;
        } else {
            l = mid + 1;
        }
    }

    cout<<ans<<nl;
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