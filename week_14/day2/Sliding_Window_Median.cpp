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

int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    pbds<pair<int, int>> p; 
    int l=0, r = 0, mid;
    while(r < n)
    {
        int val = v[r];
        p.insert({val, r});

        if (r-l == k) {
            p.erase({v[l], l});
            l++;
        }

        if (r - l + 1 == k) {
            mid = (k-1)/2;
            auto med = p.find_by_order(mid);
            cout<<med->first<<" ";
        }
        r++;
    }
    return 0;
}

// https://cses.fi/problemset/task/1076/