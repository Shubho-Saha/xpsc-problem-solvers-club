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

    int first = -1;
    vector<pair<int, int>> vpair(n-1);
    map<int, int> mp;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            int x;
            cin>>x;
            if (j==0)
            {
                mp[x]++;
            }
            if (vpair[j].first == 0) {
                vpair[j].first = x;
            } else if (vpair[j].first != 0 && x != vpair[j].first) {
                vpair[j].second = x;
            }
        }
    }

    set<int> st;
    auto it = mp.begin();
    auto it2 = mp.rbegin();

    
    (it->second > it2->second) ? first = it->first : first = it2->first;
    st.insert(first);
    cout<<first<<" ";
    
    for(auto [first, second] : vpair) {
        if (st.count(first) == 0) {
            cout<<first<<" ";
            st.insert(first);
        } else if (st.count(second) == 0) {
            cout<<second<<" ";
            st.insert(second);
        }
    }
    cout<<nl;
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