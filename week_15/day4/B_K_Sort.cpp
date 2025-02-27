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
    vector<int> dq;
    int mxVal;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (i==0) mxVal = x;
        if (x < mxVal) {
            dq.push_back(mxVal-x);
        } else if (x > mxVal) {
            mxVal = x;
        }
    }

    sort(all(dq));
    ll cost = 0;
    for(int i = 0; i<dq.size(); i++) {       
        int ln = dq.size()-i;
        if (i==0) {
            int val = dq[i];
            cost += (1ll * val * (ln+1));
        } else {
            int dif = dq[i] - dq[i-1];
            cost += (1ll*dif*(ln+1));
        }

    }
    
    cout<<cost<<nl;
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