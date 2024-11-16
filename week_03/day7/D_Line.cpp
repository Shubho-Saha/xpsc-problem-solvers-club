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
    string s;
    cin>>s;
    ll ans = 0;
    vector<ll> dq;

    for(ll i=0; i<n; i++)
    {
        ll current = 0;
        if (s[i] == 'R') {
            current = n - (i+1);
        } else {
            current = i;
        }
        ans += current;

        ll optimal = 0;
        if (i < (n/2)) {
            optimal = n - (i+1);
        } else {
            optimal = i;
        }
        ll diff = optimal - current;
        dq.push_back(diff);
    }

    sort(all(dq), greater<>());
    for(int i=0; i<n; i++) {
        ans += dq[i];
        cout<<ans<<" ";
    }
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