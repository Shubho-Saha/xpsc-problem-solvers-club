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

    bool flag = false;
    int mnwaste = INT_MAX;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;

        if (x>=k) {
            flag = true;
            int waste = x % k;
            mnwaste = min(mnwaste, waste);
        }
    }

    if (flag) {
        cout<<mnwaste<<nl;
    } else {
        cout<<-1<<nl;
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