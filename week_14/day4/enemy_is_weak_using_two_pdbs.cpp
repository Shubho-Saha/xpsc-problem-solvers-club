#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbdsL = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

template<typename T> using pbdsG = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
//1. order_of_key 2. *find_by_order()

int main()
{
    fastIO();
    int n;
    cin>>n;
    pbdsL<int> Lst;
    pbdsG<int> Gst;
    vector<int> v;

    for(int i=0; i<n; i++) {
        int x; 
        cin>>x;
        v.push_back(x);
        Lst.insert(x);
    }

    ll sum = 0;
    for(int i=0; i<n; i++) {
        int midVal = v[i];
        Gst.insert(midVal);
        ll left = Gst.order_of_key(midVal);

        ll right = Lst.order_of_key(midVal);
        Lst.erase(midVal);
        sum += (left*right);
    }

    cout<<sum<<nl;
    return 0;
}

// https://codeforces.com/contest/61/problem/E