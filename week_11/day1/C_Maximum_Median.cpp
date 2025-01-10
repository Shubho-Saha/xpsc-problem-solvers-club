#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    int midvalue = v[n/2];

    auto ok=[&](int target) {
        ll cnt = 0;
        for(int i=n/2; i<n; i++) {
            if (v[i] < target) {
                cnt += target - v[i];
            } else {
                break;
            }
        }
        return cnt <= k;
    };

    int l=midvalue, r=midvalue+1e9, mid, ans;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout<<ans<<nl;

    return 0;
}