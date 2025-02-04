#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 
//1. order_of_key 2. *find_by_order()

void solve()
{
    int n;
    cin>>n;
    pbds<int> end;
    vector<pair<int,int>> p;
    for(int i=0; i<n; i++) {
        int s, f;
        cin>>s>>f;
        end.insert(f);
        p.push_back({s, f});
    }

    sort(all(p));
    ll sum = 0;
    for(auto [s, e] : p) {
        int cnt = end.order_of_key(e);
        sum += cnt;
        end.erase(e);
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

// https://codeforces.com/contest/1915/problem/F