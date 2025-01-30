#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    vector<int> prefix(n+1);
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        l--;
        prefix[l]++;
        prefix[r]--;
    }
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + prefix[i];
    }
    ll ans = 0;
    sort(all(v), greater<>());
    sort(all(prefix), greater<>());
    for(int i=0; i<n; i++) {
        ans += (v[i]*1LL * prefix[i]);
    }

    cout<<ans<<nl;

    return 0;
}

// https://codeforces.com/contest/276/problem/C