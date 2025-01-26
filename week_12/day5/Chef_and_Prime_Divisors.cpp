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
    
    while(__gcd(a, b) > 1)
    {
        b /= __gcd(a, b);
    }

    if (b == 1) {
        cout<<"Yes"<<nl;
    } else {
        cout<<"No"<<nl;
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

// https://www.codechef.com/problems/CHAPD