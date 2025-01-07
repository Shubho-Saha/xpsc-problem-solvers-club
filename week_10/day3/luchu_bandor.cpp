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
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int q; cin>>q;
    while(q--) {
        int key; cin>>key;
        auto it = lower_bound(all(v), key);
        if (it == v.begin()) {
            cout<<"X"<<" ";
        } else {
            --it;
            cout<<*it<<" ";
        }

        auto it2 = upper_bound(all(v), key);
        if (it2 == v.end()) {
            cout<<"X"<<nl;
        } else {
            cout<<*it2<<nl;
        }
    }

    return 0;
}