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

    int ans = ceil(1.0*n/2);
    int l = 1, r = 3*n;

    cout<<ans<<nl;
    while (l < r)
    {
        cout<<l<<" "<<r<<nl;
        l += 3; r -= 3;
    }
    
}
int main()
{
    fastIO();
    int t;
    t = 1; 
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}