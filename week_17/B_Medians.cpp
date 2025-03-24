#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    if (k==n || k==1) {
        if (n==1) {
            cout<<1<<nl;
            cout<<1<<nl;
        } else {
            cout<<-1<<nl;
        }
        return;
    }

    if (k % 2 == 0) {
        cout<<3<<nl;
        cout<<1<<" "<<k<<" "<<k+1<<nl;
    } else {
        cout<<3<<nl;
        cout<<1<<" "<<k-1<<" "<<k+2<<nl;
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