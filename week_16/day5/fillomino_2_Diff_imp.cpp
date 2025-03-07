#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for(int i=0; i<n; i++) {
        int val;
        cin>>val;
        int cnt = val, x = i, y = i;
        while(cnt--)
        {
            grid[x][y] = val;
            if (y > 0 && grid[x][y-1] == 0) {
                y--;
            } else {
                x++;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<nl;
    }

    return 0;
}