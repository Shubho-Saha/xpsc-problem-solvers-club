#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l=0, r=0;
    ll ans = 0;
    while(l<n && r<m)
    {
        int current = a[l];

        int cnt1 = 0, cnt2 = 0;
        while(l < n && a[l] == current) {
            cnt1++; l++;
        }
        while(r<m && current > b[r]) {
            r++;
        }
        while(r < m && b[r] == current) {
            cnt2++; r++;
        }
        ans += (1ll * cnt1 * cnt2);
    }
    cout<<ans<<nl;

    return 0;
}