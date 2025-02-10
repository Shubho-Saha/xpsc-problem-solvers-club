#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<char>> grid(n, vector<char>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>grid[i][j];
        }
    }

    for(int i=0; i<n; i+=k) {
        for(int j=0; j<n; j+=k) {
            if (grid[i][j] == '0') {
                cout<<0;
            } else {
                cout<<1;
            }
        }
        cout<<nl;
    }
    // cout<<nl;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
