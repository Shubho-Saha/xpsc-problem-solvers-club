#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    int zero = 0, one = 0;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (x == 0) {
            zero++;
        } else {
            one++;
        }
    }

    cout<<min(one, zero)<<nl;
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