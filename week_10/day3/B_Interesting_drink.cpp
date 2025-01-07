#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(all(v));

    int q; cin>>q;
    while(q--)
    {
        int target;
        cin>>target;
        auto it = upper_bound(all(v), target);

        cout<<it-v.begin()<<nl;
    }

    return 0;
}