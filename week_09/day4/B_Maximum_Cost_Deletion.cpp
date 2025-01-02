#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    string s;
    cin>>s;

    auto it = unique(all(s));
    int op = distance(s.begin(), it) / 2 + 1;
    
    cout<<(n*a) + max((n*b), (op*b))<<nl;
    
    
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