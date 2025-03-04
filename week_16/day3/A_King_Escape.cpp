#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int n;
const int mxN = 1005;
int visited[mxN][mxN];

bool isValid(int i, int j) {
    return (i>0 && i<=n && j>0 && j<=n);
}

int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};

void DFS(int x, int y)
{
    visited[x][y] = true;
    for(int i=0; i<8; i++) {
        int cx = x + dx[i];
        int cy = y + dy[i];
        if (isValid(cx, cy) && visited[cx][cy] == false) {
            DFS(cx, cy);
        }
    }
}

void BFS(int x, int y)
{
    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty())
    {
        auto p = q.front();
        q.pop();
        for(int i=0; i<8; i++) {
            int cx = p.first + dx[i];
            int cy = p.second + dy[i];
            if (isValid(cx, cy) && visited[cx][cy] == false) {
                q.push({cx, cy});
                visited[cx][cy] = true;
            }
        }
    }
    
}

void solve()
{
    cin>>n;
    int qx, qy, kx, ky, tx, ty;
    cin>>qx>>qy>> kx>>ky>> tx>>ty;
    memset(visited, false, sizeof(visited));

    visited[qx][qy] = true;
    for(int i=0; i<8; i++) {
        int DX = qx + dx[i];
        int DY = qy + dy[i];
        while(isValid(DX, DY)) {
            visited[DX][DY] = true;
            DX = DX + dx[i];
            DY = DY + dy[i];
        }
    }
    
    BFS(kx, ky);

    if (visited[tx][ty]) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
}

int main()
{
    fastIO();
    solve();

    return 0;
}