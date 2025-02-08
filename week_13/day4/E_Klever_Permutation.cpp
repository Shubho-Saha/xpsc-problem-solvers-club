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
    vector<int> v(n);

    int inc = 1, dec = n;
    for(int i=0; i<k; i++) {
        for(int j=i; j<n; j += k) {
            if (j&1) {
                v[j] = inc++;
            } else {
                v[j] = dec--;
            }
        }
    }

    for(auto x : v) {
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

// https://codeforces.com/contest/1927/problem/E