#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 2e5+10;
vector<int> adlist[mxN];
int cnt[mxN];

void resetGlobal(int sz)
{
    for(int i=0; i<=sz; i++) {
        adlist[i].clear();
    }
    fill(cnt, cnt+sz+1, 0);
}

int dfs(int root, int parent)
{
    if (adlist[root].size() == 1 && root != parent) {
        cnt[root] = 1;
        return 1;
    }

    int leafcnt = 0;
    for(auto child : adlist[root]) {
        if (child != parent) {
            leafcnt += dfs(child, root);
        }
    }
    cnt[root] = leafcnt;
    return cnt[root];
}


void solve()
{   
    int n;
    cin>>n;
    resetGlobal(n);

    for(int i=1; i<n; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    dfs(1, 1);

    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;

        cout<<(1ll*cnt[x]*cnt[y])<<nl;
    }

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