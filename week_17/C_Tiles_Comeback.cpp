#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n+1);
    int cnt1 = 0, color1 = -1;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        if (i == 1) {
            cnt1++;
            color1 = v[i];
        } else {
            if (v[i] == color1) cnt1++;
        }
    }

    if (v[1] == v[n] && cnt1 >=k) {
        cout<<"YES"<<nl;
        return;
    }

    int endcolor = v[n];
    int idx = -1, colorcnt = 0;
    for(int i=1; i<=n; i++) {
        if (v[i] == color1) {
            colorcnt++;
        }
        if (colorcnt == k) {
            idx = i;
            break;
        }
    }

    int endcnt = 0;
    if (idx == -1) {
        cout<<"NO"<<nl;
    } else {
        for(int i=idx+1; i<=n; i++) {
            if (v[i] == endcolor) {
                endcnt++;
            }
        }
        if (endcnt >= k) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
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