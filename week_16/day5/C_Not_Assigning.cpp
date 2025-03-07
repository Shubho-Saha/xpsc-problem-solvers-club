#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int n;
const int mxN = 1e5+10;
vector<int> adlist[mxN];
bool visited[mxN];
int res[mxN];

void resetGlobal(int n)
{
    fill(res, res+n+1, -1);
    fill(visited, visited+n+1, false);
    for(int i=0; i<=n; i++) {
        adlist[i].clear();
    }
}

void bfs(int root, map<pair<int,int>, int> &mp, int f)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;

    while(!q.empty())
    {
        int first = q.front();
        q.pop();
        for(auto child : adlist[first]) {
            if (visited[child] == false) {
                int mn = min(first, child);
                int mx = max(first, child);
                int pos = mp[{mn, mx}];
                if (f) {
                    res[pos] = 2; f = 1 - f;
                } else {
                    res[pos] = 3; f = 1 - f;
                }
                visited[child] = true;
                q.push(child);
            }
        }
    }
}
void solve()
{
    
    cin>>n;
    resetGlobal(n);
    map<pair<int,int>, int> mp;
    for(int i=1; i<n; i++) {
        int a, b;
        cin>>a>>b;
        mp[{min(a, b), max(a, b)}] = i;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    bool flag = false;
    int root = -1;
    for(int i=1; i<=n; i++)  {
        if (adlist[i].size() > 2) {
            flag = true;
            break;
        }
        if (adlist[i].size() == 1) {
            root = i;
        }
    }

    if (flag) {
        cout<<-1<<nl;
    } else {       
        bfs(root, mp, 1);

        for(int i=1; i<n; i++) {
            cout<<res[i]<<" ";
        }
        cout<<nl;
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