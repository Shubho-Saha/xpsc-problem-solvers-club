#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string a, b;
    cin>>a>>b;
    int n = a.size(), m = b.size();
    
    if (a[0] == b[0]) {
        cout<<"YES"<<nl;
        cout<<a[0]<<"*"<<nl;
        return;
    }
    if (a[n-1] == b[m-1]) {
        cout<<"YES"<<nl;
        cout<<"*"<<a[n-1]<<nl;
        return;
    }

    for(int i=0; i<n-1; i++)
    {
        char f = a[i], s = a[i+1];
        for(int j=0; j<m-1; j++)
        {
            if (f==b[j] && s==b[j+1]) {
                cout<<"YES"<<nl;
                cout<<"*"<<f<<s<<"*"<<nl;
                return;
            }
        }
    }

    cout<<"NO"<<nl;
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