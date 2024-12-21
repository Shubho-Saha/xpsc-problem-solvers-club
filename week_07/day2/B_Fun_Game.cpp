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
    string s, t;
    cin>>s>>t;

    if (s == t || s[0] == '1') {
        cout<<"YES"<<nl;
        return;
    }
    int tidx = -1, sidx = INT_MAX;
    for(int i=0; i<n; i++) 
    {
        if (s[i] == '1' && sidx == INT_MAX) {
            sidx = i;
        }
        if (t[i] == '1' && tidx == -1) {
            tidx = i;
        }
    }
    
    if (tidx == -1 || tidx >= sidx) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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