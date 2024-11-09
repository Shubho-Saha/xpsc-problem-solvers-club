#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    string str;
    cin>>str;
    map<int, int> mp;
    map<char, int> cmap;
    for(int i=0; i<m; i++) {
        int idx; 
        cin>>idx;
        mp[idx]++;
    }


    string secStr;
    cin>>secStr;
    for(char c : secStr) {
        cmap[c]++;
    }
    

    while(!mp.empty() && !cmap.empty())
    {
        auto opIt = mp.begin();
        int opIdx = opIt->first;
        int opCount = opIt->second;
        if (opCount == 1)
        {
            auto it = cmap.begin();
            str[opIdx - 1] = it->first;
            cmap[it->first]--;
            if (it->second == 0) {
                cmap.erase(it);
            }
            mp.erase(opIt);
        } else {
            auto it = --cmap.end();
            str[opIdx-1] = it->first;
            cmap[it->first]--;
            if (it->second == 0) {
                cmap.erase(it);
            }
            mp[opIdx]--;
        }
    }
    cout<<str<<nl;
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