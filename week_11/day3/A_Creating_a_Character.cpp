#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int str, brain, exp;
    cin>>str>>brain>>exp;

    auto isGood = [&](int bpoint) {
        if (brain + bpoint < str + (exp-bpoint)) {
            return true;
        } else {
            return false;
        }
    };

    int l=0, r=exp, mid, ans=-1;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            ans = mid;
            l = mid+1;
        } else {
            r = mid-1;
        }
    }

    cout<<ans+1<<nl;


}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}