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
    vector<int> v1(n), v2(n);
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        cin>>v1[i];
        mp[v1[i]] = i;
    }
    for(int i=0; i<n; i++) {
        cin>>v2[i];
    }

    for(int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
    cout<<nl;
    for(auto [val, idx] : mp) {
        cout<<v2[idx]<<" ";
    }
    cout<<nl;

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