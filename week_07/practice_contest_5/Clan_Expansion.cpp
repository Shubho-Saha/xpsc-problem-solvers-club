#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int, vector<int>> mp;

    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        mp[x].push_back(i);
    }

    map<int, set<int>> ans;
    for(auto [key, vec] : mp) {
        int dayCnt = 0, day2 = 0;
        int mxDay = INT_MIN;
        for(int i=0; i<vec.size(); i++) {
            if (i==0) {
                dayCnt = (vec[0]-1);
                if (vec.size() == 1) {
                    day2 = n - vec[i];
                }
                mxDay = max({dayCnt, day2, mxDay});
            } else if (i==vec.size()-1) {
                dayCnt = n-vec[i];
                int gap = (vec[i]-vec[i-1])-1;
                int gapDay = (gap/2)+(gap%2);
                mxDay = max({dayCnt, gapDay, mxDay});
            } else {
                int gap = vec[i] - vec[i-1] - 1;
                dayCnt = (gap/2) + (gap%2);
                mxDay = max(mxDay, dayCnt);
            }
        }

        ans[mxDay].insert(key);
    }
    
    auto it = ans.begin();
    int clan = *it->second.begin();
    int days = it->first;
    cout<<clan<<" "<<days<<nl;
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