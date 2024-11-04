#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();

    multiset<int> mset;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mset.insert(x);
    }

    for(auto x : mset)
    {
        cout<<x<<" ";
    }
    cout<<nl;
    cout<<mset.count(7)<<nl;
    cout<<mset.count(8)<<nl;

    // auto it = mset.find(7);

    // if (it != mset.end())
    // {
    //     cout<<*it<<nl;
    // } else {
    //     cout<<"Not found"<<nl;
    // }

    // it = mset.lower_bound(4);
    // cout<<*it<<nl;

    // it = mset.upper_bound(7);
    // cout<<*it<<nl;

    // mset.erase(it);
    // for(auto x : mset) {
    //     cout<<x<<" ";
    // }
    // cout<<nl;

    mset.erase(7);
    for( auto x : mset)
    {
        cout<<x<<" ";
    }
    cout<<nl;


    return 0;
}