#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>; 
//1. order_of_key 2. *find_by_order()

int main()
{
    fastIO();
    int n;
    cin>>n;
    pbds<int> forward, backward;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
        backward.insert(x);
    }

    ll sum = 0;
    for(int i=0; i<n; i++) {
        int val = v[i];
        ll left = forward.order_of_key(val);
        forward.insert(val);

        backward.erase(val);
        ll right = backward.size() - backward.order_of_key(val);
        sum += (left*right);
    }

    cout<<sum<<nl;
    
    return 0;
}

// https://codeforces.com/contest/61/problem/E