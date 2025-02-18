#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v(n), dupli;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    dupli = v;
    sort(all(dupli));
    int minVal = INT_MAX;
    for(int i=0; i<n; i++) {
        auto it = upper_bound(all(dupli), v[i]);
        int x = dupli.end() - it;
        minVal = min(minVal, i+x);
    }
    cout<<minVal<<nl;
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