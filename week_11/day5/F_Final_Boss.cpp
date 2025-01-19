#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int h, n;
    cin>>h>>n;
    vector<int> A(n), C(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>A[i];
        sum += A[i];
    }
    for(int i=0; i<n; i++) {
        cin>>C[i];
    }

    auto good = [&] (ll sec) {
        ll damage = sum;
        for(int i=0; i<n; i++) {
            ll attackTimes = (sec-1)/C[i];
            ll attackDamage = attackTimes * A[i];
            damage += attackDamage;
            if (damage >= h) break;
        }
        return damage >= h;
    };

    ll l=0, r=4e10, mid;
    while(r-l>1) {
        mid = l + (r-l)/2;
        if (good(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<r<<nl;
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