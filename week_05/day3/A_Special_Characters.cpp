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

    if (n % 2 != 0 ) {
        cout<<"NO"<<nl;
    } else {
        cout<<"YES"<<nl;
        char c = 'A';
        for(int i=1; i<=(n/2); i++) {
            cout<<c<<c;
            c++;
        }
        cout<<nl;
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