#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n; cin>>n;
    vector<int> a(n), b(n), c(n);
    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;

    for(int i=0; i<n; i++) {
        c[i] = a[i] - b[i];
    }

    ll sum = 0;
    sort(all(c));
    for(int i=0; i<n; i++) {
        int need = -c[i];
        auto it = upper_bound(c.begin()+i+1, c.end(), need);
        int dis = c.end() - it;
        sum += dis;
    }

    cout<<sum<<nl;

    return 0;
}