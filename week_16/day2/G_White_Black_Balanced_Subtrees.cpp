#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int ans;

int DFS(int root, vector<vector<int>> &adlist, string &s) 
{
    if (adlist[root].size() == 0) {
        if (s[root-1] == 'W') {
            return -1;
        } else {
            return 1;
        }
    }

    int cnt = 0;
    for(auto child : adlist[root]) {
        cnt += DFS(child, adlist, s);
    }

    if (s[root-1] == 'W') cnt--;
    else cnt++;
   
    if (cnt == 0) ans++;
    return cnt;
}
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> adlist(n+1);

    for(int i=2; i<=n; i++) {
        int p;
        cin>>p;
        adlist[p].push_back(i);
    }

    string s; cin>>s;
    ans = 0;
    DFS(1, adlist, s);
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