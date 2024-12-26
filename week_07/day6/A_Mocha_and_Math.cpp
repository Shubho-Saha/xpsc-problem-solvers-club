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
    vector<int> posbitcnt(31, 0);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int lastOnbit = __lg(x);
        for(int k=0; k<=lastOnbit; k++)
        {
            if ((x>>k)&1) {
                posbitcnt[k]++;
            }
        }
    }

    int ans = 0;
    for(int i=0; i<31; i++)
    {
        if (posbitcnt[i] == n) {
            ans += (1<<i);
        }
    }
    cout<<ans<<nl;
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