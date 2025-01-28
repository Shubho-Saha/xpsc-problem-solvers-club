#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int dif1 = 0, dif2 = 0, dif3 = v[n-1] - v[0];
    for(int i=0; i<n-1; i++) {
        dif1 = max(dif1, v[n-1]-v[i]);
    }
    for(int i=n-1; i>0; i--) {
        dif2 = max(dif2, v[i] - v[0]);
    }

    for(int i=0; i<n-1; i++) {
        dif3 = max(dif3, v[i] - v[i+1]);
    }

    cout<<max({dif1, dif2, dif3})<<nl;
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

// https://codeforces.com/problemset/problem/1726/A