#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int MOD = 1e9 + 7;
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;

        for (int i = 1; i <= n; i++)
        {
            ans = (1ll * ans % MOD * i % MOD) % MOD;
        }

        cout << ans <<nl;
    }

    return 0;
}