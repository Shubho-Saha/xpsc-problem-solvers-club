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

    int mxAns = 0;
    for (int k = 2; k <= 2 * n; k++)
    {
        int weight = k;
        int left = 0, right = n - 1;
        int cnt = 0;
        while (left < right)
        {
            if (v[left] + v[right] == weight)
            {
                cnt++;
                left++;
                right--;
            }
            else if (v[left] + v[right] < weight)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        mxAns = max(mxAns, cnt);
    }

    cout << mxAns << nl;
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

// https://codeforces.com/problemset/problem/1399/C