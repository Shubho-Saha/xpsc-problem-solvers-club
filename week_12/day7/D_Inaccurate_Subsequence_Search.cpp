#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    map<int, int> bmap, cmap;
    for(int i=0; i<m; i++) {
        int x; cin>>x;
        bmap[x]++;
    }

    int l=0, cnt = 0, ans = 0;
    for(int r=0; r<n; r++)
    {
        int val = a[r];
        cmap[val]++;
        if (bmap.count(val) != 0) {
            if (cmap[val] <= bmap[val]) {
                cnt++;
            }
        }

        if (r-l >= m) {
            int leftVal = a[l];
            cmap[leftVal]--;
            if (bmap.count(leftVal) != 0) {
                if (cmap[leftVal] < bmap[leftVal]) {
                    cnt--;
                }
            }
            l++;
        }

        if (r-l == m-1) {
            if (cnt >= k) ans++;
        }
    }

    cout<<ans<<nl;

    
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

// https://codeforces.com/problemset/problem/1955/D