#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }

    int mn = INT_MAX, mx = INT_MIN;
    vector<int> res(k + 1);
    for (int i = k; i >= 1; i--)
    {
        if (mp.count(i) == 0)
        {
            res[i] = 0;
        }
        else
        {
            mn = min(mn, mp[i].front());
            mx = max(mx, mp[i].back());
            res[i] = 2 * (mx - mn + 1);
        }
    }

    for (int i = 1; i <= k; i++)
    {
        cout << res[i] << " ";
    }
    cout << nl;
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