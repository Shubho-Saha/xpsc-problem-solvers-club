#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> res(n);

    int crnt = 1;
    for(int i=0; i<k; i++) {
        vector<int> idx;
        for(int j=i; j<n; j += k) {
            idx.push_back(j);
        }
        if (i&1) reverse(all(idx));
        for(auto it : idx) res[it] = crnt++;
    }

    for(auto x : res) {
        cout<<x<<" ";
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