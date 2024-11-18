#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b, n, s;
        cin>>a>>b>>n>>s;

        if ((a*n) < s)
        {
            if ((a*n) + b >= s) {
                cout<<"YES"<<nl;
            } else {
                cout<<"NO"<<nl;
            }
        } else if ((a*n) > s) {
            ll x = s / n;
            if ((x*n) + b >= s) {
                cout<<"YES"<<nl;
            } else {
                cout<<"NO"<<nl;
            }
        } else {
            cout<<"YES"<<nl;
        }
    }

    return 0;
}