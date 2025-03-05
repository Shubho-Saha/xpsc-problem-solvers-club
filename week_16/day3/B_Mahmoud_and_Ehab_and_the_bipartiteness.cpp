#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e5+5;
vector<vector<int>> adlist(mxN);
bool visited[mxN];
int st[2];

void resetGlobal(int n)
{
    fill(visited, visited+n+1, false);
    for(int i=0; i<=n; i++) {
        adlist[i].clear();
    }
}

void DFS(int root, bool flag)
{
    visited[root] = true;
    st[flag]++;
    flag = 1 - flag;
    for(auto child : adlist[root]) {
        if (visited[child] == false) {
            DFS(child, flag);
        }
    }
}

int main()
{
    fastIO();
    int n;
    cin>>n;

    for(int i=1; i<n; i++) {
        int u, v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }

    DFS(1, true);

    ll total = (1ll * st[0] * st[1]);
    total -= (n-1);
    cout<<total<<nl;


    return 0;
}