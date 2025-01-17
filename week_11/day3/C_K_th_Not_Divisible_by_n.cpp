#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        auto good = [&](int number) {
            return ((number - (number/n)) >= k);
        };

        // if n = 2 and k = 1e9 max 2e9 would be good enough
        int l = 0, r=2e9+100, mid;
        while(r-l > 1)
        {
            mid = l + (r-l)/2;
            if (good(mid)) {
                r = mid;
            } else {
                l = mid;
            }
        }

        cout<<r<<nl;
    }

    return 0;
}