#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x, n, m;
    cin>>x>>n>>m;

    if (x>20)
    {
        for(int i=1; i<=n; i++) 
        {
            x = (x/2)+10;
        }
    }

    if (x <= 10*m) {
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

// https://codeforces.com/problemset/problem/1337/B