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
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    double avg = sum * 1.0 / n;
    double target = avg * 2;
    ll K = target;
    if (target != K)
    {
        cout << 0 << nl;
    }
    else
    {
        sort(all(v));
        ll ans = 0;
        int left = 0, right = n - 1;
        while (left < right)
        {
            ll sum = v[left] + v[right];
            if (sum == K) {

                if (v[left] == v[right]) {
                    ll dis = right - left;
                    ans += (dis * (dis+1))/2;
                    break;
                } else {
                    int lcnt = 1, rcnt = 1;
                    while(left < right && v[left] == v[left+1]) {
                        lcnt++;
                        left++;
                    }
                    while(left < right && v[right] == v[right-1]) {
                        rcnt++;
                        right--;
                    }

                    ans += (1ll*lcnt*rcnt);
                    left++; right--;
                }

            } else if (sum < K) {
                left++;
            } else {
                right--;
            }
        }

        cout<<ans<<nl;
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
