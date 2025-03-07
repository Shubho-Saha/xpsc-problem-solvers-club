#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
int dx[2] = {0, 1};
int dy[2] = {-1, 0};

bool isValid(int i, int j)
{
    return (i >= 1 && i <= n && j >= 1 && j <= n);
}

void dfs(int si, int sj, int val, int &cnt, vector<vector<int>> &grid)
{
    if (cnt == 0) return;
    grid[si][sj] = val;
    cnt--; 
    
    for (int i = 0; i < 2; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        if (isValid(ci, cj) && grid[ci][cj] == 0)
        {
            dfs(ci, cj, val, cnt, grid);
        }
    }
}

int main()
{
    fastIO();
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> grid(n + 2, vector<int>(n + 2, 0));

    for(int i=1; i<=n; i++) {
        int count = v[i];
        dfs(i, i, v[i], count, grid);
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<nl;
    }

    return 0;
}