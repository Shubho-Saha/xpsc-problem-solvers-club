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
    string a, b;
    cin>>a>>b;
    int ans = 0, idx=0;
    for(int i=0; i<n; i++) {
        bool flag = false;
        for(int k=idx; k<m; k++) {
            if (a[i] == b[k]) {
                ans++;
                flag = true;
                idx = k+1;
                break;
            }
        }
        if (!flag) {
            break;
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

// https://codeforces.com/contest/1968/problem/B