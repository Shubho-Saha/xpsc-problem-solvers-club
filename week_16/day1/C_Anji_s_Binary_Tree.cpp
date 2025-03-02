#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int minAns;
void DFS(int root, int cnt,  vector<vector<int>> &adlist, string &s)
{
    if (adlist[root][0] == 0 && adlist[root][1] == 0) {
        minAns = min(minAns, cnt);
        return;
    }

    if (adlist[root][0] != 0) {
        int child = adlist[root][0];
        if (s[root-1] == 'L') {            
            DFS(child, cnt, adlist, s);
        } else {
            DFS(child, cnt+1, adlist, s);
        }
    }

    if (adlist[root][1] != 0) {
        int child = adlist[root][1];
        if (s[root-1] == 'R') {
            DFS(child, cnt, adlist, s);
        } else {
            DFS(child, cnt+1, adlist, s);
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    vector<vector<int>> adlist(n+1);
    for(int i=1; i<=n; i++) {
        int l, r;
        cin>>l>>r;
        adlist[i].push_back(l);
        adlist[i].push_back(r);
    }

    minAns = INT_MAX;
    DFS(1, 0, adlist, s);

    cout<<minAns<<nl;
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