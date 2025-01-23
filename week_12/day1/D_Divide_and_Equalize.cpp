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
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;

        for(int k=2; k*k <=x; k++) {
            while(x % k == 0) {
                mp[k]++;
                x /= k;
            }
        }
        if (x > 1) mp[x]++;
    }

    bool flag = true;
    for(auto [key, val] : mp) {
        if (val % n != 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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