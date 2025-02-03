#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e5+5;
int main()
{
    fastIO();
    ll n, m, k;
    cin>>n>>m>>k;

    // input gula nilam
    vector<ll> v(n+2);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    // operation gula index wise save kore nilam
    vector<vector<ll>> op(m+2, vector<ll>(3));
    for(int i=1; i<=m; i++) {
        cin>>op[i][0] >> op[i][1] >> op[i][2];
    }

    // kun operation kotobar kore kora lagbe ber kortesi
    vector<ll> dif(m+2, 0), pre(n+2, 0); 
    for(int i=1; i<=k; i++)
    {
        ll x, y;
        cin>>x>>y;
        dif[x]++;
        dif[y+1]--;
    }
    for(int i=1; i<=m+1; i++) {
        dif[i] += dif[i-1];
    }

    // operation wise difference array build kortesi
    for(int i=1; i<=m; i++) {
        ll kotobar = dif[i];
        ll l = op[i][0];
        ll r = op[i][1];
        ll d = op[i][2];
        pre[l] += (d*kotobar);
        pre[r+1] -= (d*kotobar);
    }
    for(int i=1; i<=n; i++) {
        pre[i] += pre[i-1];
    }

    // lastly difference array er sathe main array er value gula plus kore dicchi. 
    for(int i=1; i<=n; i++) {
        cout<<v[i] + pre[i]<<" ";
    }
    return 0;
}

// https://codeforces.com/contest/295/problem/A