#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void fun(vector<int> &vec, vector<vector<int>> &ans, vector<int> &tmp, vector<int> &vis) {
    if (vec.size() == tmp.size()) {
        ans.push_back(tmp);
        return;
    }

    for(int i=0; i<vis.size(); i++)
    {
        if (!vis[i]) {
            tmp.push_back(vec[i]);
            vis[i] = 1;
            fun(vec, ans, tmp, vis);
            vis[i] = 0;
            tmp.pop_back();
        }
    }

}

int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    vector<vector<int>> ans;
    vector<int> tmp, vis(v.size(), 0); 

    fun(v, ans, tmp, vis);

    for(auto vec : ans) {
        for(auto x : vec) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
    

    return 0;
}