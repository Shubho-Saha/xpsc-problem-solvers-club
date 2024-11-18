#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isValid (int x, int y, vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    if ((x >= 0 && x<n)&& (y>=0 && y<m)) {
        return true;
    } else {
        return false;
    }
}

void dfs(int x, int y, vector<vector<int>> &grid, int &current) 
{
    current += grid[x][y];
    int tempX = x;
    int tempY = y;
    while(true)
    {
        int newX = tempX + 1;
        int newY = tempY + 1;
        if (!isValid(newX, newY, grid))  {
            break;
        }
        current += grid[newX][newY];
        tempX = newX;
        tempY = newY;
    }
    tempX = x;
    tempY = y;
     while(true)
    {
        int newX = tempX - 1;
        int newY = tempY - 1;
        if (!isValid(newX, newY, grid))  {
            break;
        }
        current += grid[newX][newY];
        tempX = newX;
        tempY = newY;
    }

    tempX = x;
    tempY = y;
     while(true)
    {
        int newX = tempX + 1;
        int newY = tempY - 1;
        if (!isValid(newX, newY, grid))  {
            break;
        }
        current += grid[newX][newY];
        tempX = newX;
        tempY = newY;
    }

    tempX = x;
    tempY = y;
     while(true)
    {
        int newX = tempX - 1;
        int newY = tempY + 1;
        if (!isValid(newX, newY, grid))  {
            break;
        }
        current += grid[newX][newY];
        tempX = newX;
        tempY = newY;
    }

  
}

void solve()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> grid(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    int current = 0;
    int mxval = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            dfs(i, j, grid, current);
            mxval = max(mxval, current);
            current = 0;
        }
    }
    cout<<mxval<<nl;
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