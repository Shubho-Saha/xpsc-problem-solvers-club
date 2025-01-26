#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int mxN = 1e6;
void solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    vector<ll> divisors;

    for (int i = 1; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            divisors.push_back(i);
            if (i != l / i)
            {
                divisors.push_back(l / i);
            }
        }
    }

    ll ans = 0;
    for (auto k : divisors)
    {
        ll ab = l / k;
        ll pa = 1;
        bool flag = false;
        for (ll i = 0; i <= 20; i++)
        {
            if (i == 0)            
                pa = 1;            
            else            
                pa *= a;           
            ll pb = 1;
            for (ll k = 0; k <= 20; k++)
            {
                if (k == 0)
                    pb = 1;
                else
                    pb *= b;

                if (ab == (pa * pb))
                {
                    ans++;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }

    cout << ans << nl;
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