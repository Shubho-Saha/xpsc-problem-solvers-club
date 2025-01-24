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
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (x <= n) {
            mp[x]++;
        }
    }

    int mxVal = 0;
    for(int i=1; i<=n; i++) {
        int value = i;
        int cnt = 0;
        for(int k=1; k*k <=value; k++)
        {
            if (value % k == 0) {
                int a = k, b = value/k;
                if (mp.count(a) != 0) {
                    cnt += mp[a];
                }
                if (b != a && mp.count(b) != 0) {
                    cnt += mp[b];
                } 
            }
        }
        mxVal = max(mxVal, cnt);
    }

    cout<<mxVal<<nl;
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