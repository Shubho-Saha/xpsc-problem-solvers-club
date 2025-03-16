#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, c, q;
    cin>>n>>c>>q;
    string s = "1", b;
    cin>>b;
    s += b;

    vector<ll> len(1, n), l(c+1), r(c+1);
    for(int i=1; i<=c; i++) {
        cin >> l[i] >> r[i];
        len.push_back(len[i - 1] + r[i] - l[i] + 1);
    }

    while(q--)
    {
        ll k; cin>>k;
        int i = c;
        while(i != 0)
        {
            if (len[i-1] >= k) {
                i--;
            } else {
                k = k - len[i-1];
                k = l[i] + k - 1;
            }
        }

        cout<<s[k]<<nl;
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}