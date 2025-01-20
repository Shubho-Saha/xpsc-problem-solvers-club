#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));

    auto good = [&](int k)
    {
        if (k == 0) return true;
        auto it = upper_bound(all(v), k);
        if (it == v.begin()) return false;
        multiset<int> mset(v.begin(), it);

        int tmp = k, req = k, cnt = 0;
        while (tmp--)
        {
            if (!mset.empty()) {
                auto it = mset.upper_bound(req);
                if (it == mset.begin()) break;
                it--; cnt++;
                mset.erase(it);
            }
            if (!mset.empty()) {
                auto it = mset.lower_bound(1);
                mset.erase(it);
            }
            req--;
        }

        return cnt >= k;
    };

    int l = 0, r = 101, mid;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        if (good(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << l << nl;
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