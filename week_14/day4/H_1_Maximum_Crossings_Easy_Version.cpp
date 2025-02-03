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
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    ll sum = 0;
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++)
        {
            if (i == j) continue;
            if (j < i && v[j] >= v[i]) sum++;
            if (j > i && v[j] <= v[i]) sum++; 
        }
    }

    cout<<sum/2<<nl;
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

// https://codeforces.com/problemset/problem/1676/H1