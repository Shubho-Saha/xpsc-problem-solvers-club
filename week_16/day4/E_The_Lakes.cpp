#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1000+10;
int n, m;
int grid[mxN][mxN];
bool visited[mxN][mxN];

int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1};

void resetGlobal(int n, int m) {
    for(int i=0; i<=n+2; i++) {
        fill(grid[i], grid[i]+m+1, 0);
        fill(visited[i], visited[i]+m+1, false);
    }
}

bool isValid(int i, int j)
{
    return (i>= 0 && i<n && j>=0 && j<m);
}


ll dfs(int si, int sj, ll sum)
{
    sum += grid[si][sj];
    visited[si][sj] = true;

    for(int i=0; i<4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];

        if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] != 0) {
            sum += dfs(ci, cj, 0);
        }
    }

    return sum;
}

void solve()
{
    cin>>n>>m;
    resetGlobal(n, m);

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    ll mxSum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (visited[i][j] == false && grid[i][j] != 0) {
                ll sum = dfs(i, j, 0);
                mxSum = max(sum, mxSum);
            }
        }
    }

    cout<<mxSum<<nl;
  
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}