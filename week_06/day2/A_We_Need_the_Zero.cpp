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
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    bool flag = false;
    int ans = -1;
    for (int x = 0; x <= 255; x++) {
        int xorSum = 0;
        for(int i = 0; i<n; i++) {
            int bi = x ^ vec[i];
            xorSum ^= bi;
        }

        if (xorSum == 0) {
            ans = x;
            flag = true;
            break;
        }

    }
    cout<<ans<<nl;
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