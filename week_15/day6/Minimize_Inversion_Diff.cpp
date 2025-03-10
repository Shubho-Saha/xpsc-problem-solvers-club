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
    vector<int> v(n+1), cnt(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    vector<int> res;
    for(int i=1; i<=n; i++) {
        int x; cin>>x;
        cnt[x] = v[i];
        res.push_back(i);
    }

    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;
    
    auto ok = [&](int x, int y) {
        return cnt[x] < cnt[y];
    };
    sort(all(res), ok);
    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;

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