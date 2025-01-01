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

    vector<ll> factors;

    for(ll i=1; i*i <=n; i++) {
        if (n%i==0) {
            factors.push_back(i);
            if (i != (n/i)) {
                factors.push_back(n/i);
            }
        }
    }
    sort(all(factors));
    ll mid = factors.size()/2;
    
    for(ll i=mid-1; i>=0; i--) {
        ll x = factors[i];
        ll y = n/x;
        ll lc = (x/__gcd(x,y)) * y;
        if (lc == n) {
            cout<<x<<" "<<y;
            return 0;
        }

    }
    cout<<1<<" "<<n<<nl;

    return 0;
}