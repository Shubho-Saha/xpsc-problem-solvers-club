#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    ll a, b;
    cin>>a>>b;

   
    ll lc = a * b;
    if (a % lc == 0) {
        cout<<"NO"<<nl;
        return;
    }

    if (lc == a*2) {
        lc = lc * 2;
    }
    cout<<"YES"<<nl;
    cout<<a<<" "<<lc-a<<" "<<lc<<nl;
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