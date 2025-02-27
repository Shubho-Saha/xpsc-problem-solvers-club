#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int mxVal = 0, gap = 0;
    ll cost = 0;
    for(int i=1; i<=n; i++) {
        int x; cin>>x;
        if (x < mxVal) {
            cost += mxVal-x;
            gap = max(gap, mxVal-x);
        } 
        if (x > mxVal) {
            mxVal = x;
        }
    }

    cout<<cost+gap<<nl;
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