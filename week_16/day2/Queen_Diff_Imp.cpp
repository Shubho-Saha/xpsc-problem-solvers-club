#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, root;
    cin>>n;
    vector<vector<int>> adlist(n+1);
    vector<int> self(n+1), badcnt(n+1);

    for(int i=1; i<=n; i++) {
        int p, c;
        cin>>p>>c;

        if (p == -1) {
            root = i;
            self[i] = c;
        } else {
            adlist[p].push_back(i);
            self[i] = c;
            if (c) {
                badcnt[p]++;
            }
        }
    }

    vector<int> ans;
    for(int i=1; i<=n; i++) {
        if (self[i] == 0) continue;
        if (adlist[i].size() == badcnt[i] && self[i] == 1) {
            ans.push_back(i);
        }
    }

    if (ans.empty()) {
        cout<<-1<<nl;
    } else {
        for(auto x : ans) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
}
int main()
{
    fastIO();
    solve();

    return 0;
}