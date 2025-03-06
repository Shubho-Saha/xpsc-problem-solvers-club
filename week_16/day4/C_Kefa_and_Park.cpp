#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e5+10;
int n, m;
vector<int> adlist[mxN];
int cat[mxN];
ll cnt;

void resetGlobal(int n)
{
    for(int i=0; i<=n; i++) {
        adlist[i].clear();
    }
    fill(cat, cat+n+1, 0);
    cnt = 0;
}

void dfs(int node, int parent, int catCnt)
{
    if (adlist[node].size() == 1 && node != parent) {
        if (catCnt+cat[node] <= m) cnt++;
        return;
    }

    if (cat[node] == 1) {
        int total = catCnt + 1;
        if (total <= m) {
            for(auto child : adlist[node]) {
                if (child != parent) {
                    dfs(child, node, total);
                }
            }
        }
    } else {
        for(auto child : adlist[node]) {
            if (child != parent) {
                dfs(child, node, 0);
            }
        }
    }
}

void solve()
{
    
    cin>>n>>m;
    resetGlobal(n);
    for(int i=1; i<=n; i++) {
        cin>>cat[i];
    }

    for(int i=1; i<n; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    dfs(1, 1, 0);
    cout<<cnt<<nl;
    
}

int main()
{
    fastIO();
    solve();

    return 0;
}