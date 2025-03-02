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
    vector<vector<int>> adlist(n+1);
    while(m--)
    {
        int u, v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }

    int center = -1;
    for(int i=1; i<=n; i++) {
        if (adlist[i].size() == 1) continue;
        bool flag = true;
        for(auto x : adlist[i]) {
            if (adlist[x].size() == 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            center = i;
            break;
        }
    }

    int x = adlist[center].size();
    int val = adlist[center][0];
    int y = adlist[val].size()-1;
    cout<<x<<" "<<y<<nl;
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