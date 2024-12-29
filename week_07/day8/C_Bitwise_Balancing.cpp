#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll b, c, d;
    cin>>b>>c>>d;

    int highbit = max({__lg(b), __lg(c), __lg(d)});
    ll a = 0;
    bool flag = true;
    for(int k=0; k<=highbit; k++)
    {
        if (((d>>k)&1) && !((b>>k)&1)) {
            if ((c>>k)&1) {
                flag = false;
                break;
            } else {
                a += (1ll<<k);
            }
        } else if (!((d>>k)&1) && ((b>>k)&1)) {
            if ((c>>k)&1) {
                a += (1ll<<k);
            } else {
                flag = false;
                break;
            }
        } else if (((d>>k)&1) && ((b>>k)&1)) {
            if (!((c>>k)&1)) {
                a += (1ll<<k);
            } 
        }
    }

    if (flag) {
        cout<<a<<nl;
    } else {
        cout<<-1<<nl;
    }
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