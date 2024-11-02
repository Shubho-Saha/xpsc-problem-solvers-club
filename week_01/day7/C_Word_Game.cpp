#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<string, vector<int>> mp;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++) {
            string s;
            cin>>s;
            mp[s].push_back(i);
        }
    }

    vector<int> ans(4);
    for(auto [str, vec] : mp) {
        vector<int> v = vec;
        if (v.size() == 1) {
            ans[v[0]] += 3;
        } else if (v.size() == 2) {
            ans[v[0]]++;
            ans[v[1]]++;
        }
    }

    for(int i=1; i<=3; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}