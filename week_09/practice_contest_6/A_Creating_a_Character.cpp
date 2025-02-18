#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    ll str, brain, exp;
    cin >> str >> brain >> exp;

    if ((str + exp) <= brain)
    {
        cout << 0 << nl;
    }
    else
    {
        if (exp == 0)
        {
            cout << 1 << nl;
        }
        else
        {
            if (brain == str) {
                cout<<ceil(1.0*exp/2)<<nl;
            } else if (brain > str) {
                ll dif = (exp+str) - brain;
                cout<<ceil(1.0*dif/2)<<nl;
            } else {
                
            }
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}