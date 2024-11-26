#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    multiset<ll> mset;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        mset.insert(x);
    }

    vector<ll> first;

    auto it = mset.begin();
    first.push_back(*it);
    ll sum = *it;
    mset.erase(it);

    while (true)
    {
        auto it = mset.upper_bound(sum);
        if (it == mset.end()) break;
        first.push_back(*it);
        sum += *it;
        mset.erase(it);
    }

    cout<<mset.size()<<nl;
    for(auto x : first) {
        cout<< x <<" ";
    }
    for (auto x : mset) {
        cout<< x << " ";
    }
    cout<<nl;


}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}