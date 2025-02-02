#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 
//1. order_of_key 2. *find_by_order()

int main()
{
    fastIO();
    pbds<int> p;
    p.insert(2);
    p.insert(4);
    p.insert(3);
    p.insert(2);
    p.insert(4);

    auto it = p.find(4);
    p.erase(it);
    for(auto x : p) {
        cout<<x<<" ";
    }
    cout<<nl;
    
    return 0;
}