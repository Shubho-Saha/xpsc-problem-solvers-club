#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n; cin>>n;
    vector<int> presum(n);

    ll sum = 0;
    for(int i=0; i<n; i++) {
        ll x; cin>>x;
        ll crntSum = sum + x;
        presum[i] = crntSum;
        sum = presum[i];
    }

    int q; cin>>q;
    while(q--)
    {
        int key; cin>>key;
        auto it = lower_bound(all(presum), key);
        int idx = it - presum.begin() + 1;
        cout<<idx<<nl;
    }

    return 0;
}