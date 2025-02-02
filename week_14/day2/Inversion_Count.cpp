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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        pbds<int> p;
        ll ans = 0;
        for(int i=n-1; i>=0; i--) {
            int val = v[i];
            int inv = p.order_of_key(val);
            ans += inv;
            p.insert(val);
        }

        cout<<ans<<nl;
    }

    return 0;
}