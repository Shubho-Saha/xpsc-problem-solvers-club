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
    string s;
    cin>>s;

    map<char, int> mp;
    int mxcnt = 0;
    for(auto c : s) {
        mp[c]++;
        mxcnt = max(mxcnt, mp[c]);
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