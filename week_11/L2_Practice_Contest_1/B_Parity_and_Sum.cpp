#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> even, odd;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (x & 1) {
            odd.push_back(x);
        } else {
            even.push_back(x);
        }
    }

    if (odd.size() == 0 || odd.size() == n) {
        cout<<0<<nl;
        return;
    }

    sort(all(even));
    sort(all(odd));
    ll oddMx = odd.back();
    bool flag = true;
    for(auto x : even) {
        if (x < oddMx) {
            oddMx = x + oddMx;
        } else {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout<<even.size()<<nl;
    } else {
        cout<<even.size()+1<<nl;
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}