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
    vector<int> vec;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if (x != i) {
            vec.push_back(abs(x-i));
        }
    }

    int res = vec[0];
    for(int i=1; i<vec.size(); i++) {
        res = __gcd(res, vec[i]);
    }
    cout<<res<<nl;
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