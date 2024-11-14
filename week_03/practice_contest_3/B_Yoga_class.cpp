#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;

        if (y <= 2*x) {
            cout<<n*x<<nl;
        } else {
            int ans = (n/2) * y + (n%2)*x;
            cout<<ans<<nl;
        }
    }

    return 0;
}