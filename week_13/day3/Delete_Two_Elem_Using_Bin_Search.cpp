#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    double avg = sum*1.0 / n;
    double target = avg * 2;
    ll x = target;
    if (target != x) {
        cout<<0<<nl;
    } else {
        sort(all(v));
        ll cnt = 0;
        for(int i=0; i<n; i++) 
        {
            int need = target - v[i];
            auto it = lower_bound(v.begin()+i+1, v.end(), need);
            if (it != v.end() && *it == need) {
                auto lowit = lower_bound(v.begin()+i+1, v.end(), *it);
                auto upit = upper_bound(v.begin()+i+1, v.end(), *it);
                int dis = distance(lowit, upit);
                cnt += dis;
            }
        }

        cout<<cnt<<nl;
    }
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