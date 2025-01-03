#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    while(k > 0)
    {
        int rem = x % y;
        int need = y - rem;
        if (k >= need) {
            x += need;
            k -= need;
            while(x%y == 0) {
                x = x/y;
            }
        } else {
            x += k;
            k -= k;
        }
        if (x == 1) {
            x = 1 + (k%(y-1));
            break;
        }
        
    }

    cout<<x<<nl;
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