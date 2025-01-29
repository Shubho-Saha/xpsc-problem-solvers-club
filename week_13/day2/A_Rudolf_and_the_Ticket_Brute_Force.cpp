#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> left(n), right(m);
    for(int i=0; i<n; i++) {
        cin>>left[i];
    }
    for(int i=0; i<m; i++) {
        cin>>right[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (left[i]+right[j] <= k) ans++;
        }
    }

    cout<<ans<<nl;
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

// https://codeforces.com/problemset/problem/1941/A