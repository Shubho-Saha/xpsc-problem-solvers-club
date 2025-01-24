#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int n; cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        for (int k = 0; k < 11; k++)
        {
            if (x % primes[k] == 0)
            {
                mp[primes[k]].push_back(i);
                break;
            }
        }
    }

    vector<int> res(n);
    int cnt = 1;
    for (auto [key, val] : mp) {
        for (auto x : val) {
            res[x] = cnt;
        }
        cnt++;
    }

    cout<<mp.size()<<nl;
    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;
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