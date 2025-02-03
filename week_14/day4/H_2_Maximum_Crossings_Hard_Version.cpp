#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 
//1. order_of_key 2. *find_by_order()

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    pbds<int> ost;
    ll sum = 0;
    for(int i=n-1; i>=0; i--) {
        int val = v[i];
        int cnt = ost.order_of_key(val+1);
        sum += cnt;
        ost.insert(val);
    }

    cout<<sum<<nl;
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

// https://codeforces.com/contest/1676/problem/H2