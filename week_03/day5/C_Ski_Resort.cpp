#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    ll ans = 0;
    ll first_occ = -1;
    ll last_occ = -1;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] <= q && first_occ == -1)
        {
            first_occ = i;
        }
        if (vec[i] <= q)
        {
            last_occ = i;
        }
        if (vec[i] > q && first_occ != -1)
        {
            ll length = last_occ - first_occ + 1;
            if (length >= k)
            {
                ll sum = ((length - k + 1) * (length - k + 2)) / 2;
                ans += sum;
            }
            first_occ = -1;
            last_occ = -1;
        }
    }

    if (first_occ != -1)
    {
        ll length = last_occ - first_occ + 1;
        if (length >= k)
        {
            ll sum = ((length - k + 1) * (length - k + 2)) / 2;
            ans += sum;
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