#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        mp[x]++;
    }

    map<int, pair<int, int>> res;
    int lower = -1, upper = -1;
    int firstVal = mp.begin()->first;
    bool flag = false;
    while(true)
    {
        if (mp.count(firstVal) == 0)
        {
            lower = -1;
            upper = -1;
            auto lowIt = mp.lower_bound(firstVal);
            if (lowIt != mp.end()) {
                firstVal = lowIt->first;
            } else {
                break;
            }
            
        } else {
            auto it = mp.find(firstVal);
            int value = it->first;
            int count = it->second;
            if (count >= k) {
                if (lower == -1) {
                    lower = value;
                }
                upper = value;
                res[(upper-lower)] = {lower, upper};
                firstVal++;
                flag = true;
            } else {
                lower = -1;
                upper = -1;
                firstVal++;
            }
        }

    }

    if (!flag) {
        cout<<-1<<nl;
    } else {
        auto last = res.rbegin();
        int l = last->second.first;
        int r = last->second.second;
        cout<<l<<" "<<r<<nl;
    }

      
    
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