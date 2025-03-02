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

    vector<set<int>> adlist(n+1);
    while(m--)
    {
        int u, v;
        cin>>u>>v;
        adlist[u].insert(v);
        adlist[v].insert(u);
    }

    int leaf;
    for(int i=1; i<=n; i++) {
        if (adlist[i].size() == 1) {
            leaf = i;
            break;
        }
    }

    int parent = *adlist[leaf].begin();
    int y = adlist[parent].size() - 1;
    
    int grandParent;
    for(int i=1; i<=n; i++) {
        if(adlist[i].size() > 1) {
            if (adlist[i].count(parent) != 0) {
                grandParent = i;
                break;
            }
        } 
    }

    int x = adlist[grandParent].size();
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