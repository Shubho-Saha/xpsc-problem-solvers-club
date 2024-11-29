#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> vec(k);
    for (int i = 0; i < k; i++)
    {
        cin >> vec[i];
    }

    bool flag = false;
    ll crrnt;

    if (vec[0] == 0){
        crrnt = 0;
    }  else {
        ll rem = vec[0];
        crrnt = ceil((1.0 * rem) / (n - k + 1));
    }

    for (int i = 1; i < k; i++)
    {
        ll dif = vec[i] - vec[i - 1];
        if (dif < crrnt)
        {
            flag = true;
            break;
        }
        crrnt = dif;
    }

    if (flag){
        cout << "No" << nl;
    } else {
        cout << "Yes" << nl;
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