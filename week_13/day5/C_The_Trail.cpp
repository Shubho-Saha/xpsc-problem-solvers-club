#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    string s; cin>>s;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    int r=0, c=0;
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
        if (s[i] == 'D') {
            ll sum = 0;
            for(ll j=0; j<m; j++) {
                sum += grid[r][j];
            }
            grid[r][c] = 0ll - sum;
            r++;
        } else {
            ll sum = 0;
            for(ll j=0; j<n; j++) {
                sum += grid[j][c];
            }
            grid[r][c] = 0ll - sum;
            c++;
        }
    }

    ll lastsum = 0, lr = n -1;
    for(int i=0; i<m; i++) {
        lastsum += grid[lr][i];
    }
    grid[n-1][m-1] = 0ll - lastsum;

    for(auto vec : grid) {
        for(auto x : vec) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
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