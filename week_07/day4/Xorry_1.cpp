#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll x;
    cin>>x;

    int a=0, b=0;
    int lastbit = __lg(x);
    b = 1 << lastbit;
    a = b ^ x;

    cout<<a<<" "<<b<<nl;
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