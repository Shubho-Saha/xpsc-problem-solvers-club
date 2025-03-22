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
    string s, f;
    cin>>s>>f;

    int one0 = 0, zero1 = 0;
    for(int i=0; i<n; i++) {
        if (s[i] == '1' && f[i] == '0') one0++;
        if (s[i] == '0' && f[i] == '1') zero1++;
    }

    int a = min(one0, zero1);
    int b = max(one0, zero1) - a;
    cout<<a+b<<nl;
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}