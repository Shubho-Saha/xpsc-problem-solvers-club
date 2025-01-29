#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    string a, b;
    cin>>a>>b;

    int ans = 0;
    auto first = b.begin();
    for(int i=0; i<n; i++) {
        auto val = a[i];
        auto it = find(first, b.end(), val);
        if (it != b.end()) {
            ans++;
            first = it + 1;
        } else {
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