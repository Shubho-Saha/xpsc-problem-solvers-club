#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 
//1. order_of_key 2. *find_by_order()

int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> a(n), b(n), dif(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    for(int i=0; i<n; i++) {
        dif[i] = a[i] - b[i];
    }

    pbds<int> ost;
    ll ans = 0;
    for(int i=n-1; i>=0; i--) {
        int need = 1 - dif[i];
        int cnt = ost.order_of_key(need-1);
        ans += cnt;
        ost.insert(dif[i]);
    }

    cout<<ans<<nl;
    return 0;
}

// https://codeforces.com/contest/1324/problem/D