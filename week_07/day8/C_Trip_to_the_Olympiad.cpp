#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int l, r;
    cin>>l>>r;

    int a = 0, b = 0;
    int difbit = __lg(r^l);
    int highbit = __lg(r);
    for(int k=highbit; k>=0; k--) {
        if (k > difbit) {
            if ((r>>k)&1) {
                a |= (1<<k);
            }
            if ((l>>k)&1) {
                b |= (1<<k);
            }
        } else if (k == difbit) {
            a |= (1<<k);
        } else {
            b |= (1<<k);
        }
    }

    int c = r;
    if (c == a || c == b) {
        c--;
        if (c == a || c == b) {
            c--;
        }
    }

    cout<<a<<" "<<b<<" "<<c<<nl;
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