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
    string s;
    cin>>s;

    map<char, int> mp;
    for(int i=0; i<n; i++) {
        mp[s[i]]++;
    }

    while(true)
    {
        bool flag = false;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 0) {
                cout<<it->first;
                it->second--;
                flag = true;
            }
        }
        if (!flag) break;
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