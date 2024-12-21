#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    vector<int> res(31, n);

    for(int i=30; i>=0; i--)
    {
        int onecnt = 0;
        for(int k=0; k<n; k++) {
            if ((vec[k] >> i) & 1) {
                onecnt++;
            }
        }
        res[i] = n - onecnt;
    }

    int ans = 0;
    for(int i=30; i>=0; i--)
    {
        if (res[i] == 0) {
            ans += (1<<i);
            continue;
        } 
        if (res[i] <= k)
        {
            k -= res[i];
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
    while(t--)
    {
        solve();
    }

    return 0;
}