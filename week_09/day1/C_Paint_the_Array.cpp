#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    int n; cin>>n;
    vector<ll> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    ll gcd1 = 0, gcd2 = 0;
    for(int i=0; i<n; i++) {
        if (i % 2 == 0) {
            gcd1 = __gcd(gcd1, vec[i]);
        } else {
            gcd2 = __gcd(gcd2, vec[i]);
        }
    }

    bool flag1 = true, flag2 = true;
    for(int i=0; i<n; i++)
    {
        if (i % 2 == 0) {
            if (vec[i] % gcd2 == 0) {
                flag2 = false;
            }
        } else {
            if (vec[i] % gcd1 == 0) {
                flag1 = false;
            }
        }
    }

    if (flag1) {
        cout<<gcd1<<nl;
    } else if (flag2) {
        cout<<gcd2<<nl;
    } else {
        cout<<0<<nl;
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