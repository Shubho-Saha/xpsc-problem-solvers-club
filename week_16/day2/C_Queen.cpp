#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

vector<int> res;
int cnt = 1;
bool DFS(int root,  vector<vector<int>> &adlist, vector<bool> &respect)
{
    if (adlist[root].size() == 0) {
        if (respect[root]) {
            res.push_back(root);
            return true;
        } else {
            return false;
        }
    }
    
    bool flag = true;
    for(auto child : adlist[root]) {
        bool op1 = DFS(child, adlist, respect);
        flag = (flag && op1);
    }
    if (flag && respect[root]) {
        res.push_back(root);
    }
    return respect[root];
}
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> adlist(n+1);
    vector<bool> respect(n+1);
    int root;
    for(int i=1; i<=n; i++) {
        int p, c;
        cin>>p>>c;
        if (p != -1) {
            adlist[p].push_back(i);
        } else {
            root = i;
        }
        respect[i] = c;
        
    }

    // cout<<root<<nl;
    DFS(root, adlist, respect);
    sort(all(res));
    if (res.size() == 0) {
        cout<<-1<<nl;
        return;
    }
    for(auto x : res) {
        cout<<x<<" ";
    }

}
int main()
{
    fastIO();
    solve();

    return 0;
}