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
    int pos1 = -1;
    int pos2 = -1;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if (x > 0 && pos1 == -1) {
            pos1 = x;
        } else if (x > 0 && x != pos1) {
            pos2 = x;
        }
    }

    if (pos2 == -1) {
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