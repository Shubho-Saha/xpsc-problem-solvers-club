#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    map<char, vector<int>> mp;
    for(int i=0; i<n; i++) {
        auto c = s[i];
        mp[c].push_back(i);
    }

    vector<int> dis;
    for(auto [letter, pos] : mp) {
        int mxDis = 0;
        for(int i=0; i<pos.size(); i++) {
            int crntDis;
            if (i==0) {
                crntDis = pos[i];
            } else {
                crntDis = (pos[i] - pos[i-1]) - 1;
            }
            mxDis = max(crntDis, mxDis);
            if (i == pos.size() - 1) {
                mxDis = max(mxDis, (n-pos[i])-1);
            }
        }
        dis.push_back(mxDis);
    }

    sort(all(dis));

    int mnDis = dis.front();
    if (mnDis == 0) {
        cout<<0<<nl;
    } else {
        int res = log2(mnDis);
        cout<<res+1<<nl;
    }


    
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