#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    int first = v[0], sec = v[1];
    if (first != sec) {
        cout<<"YES"<<nl;
    } else {
        bool flag = false;
        for(int i=2; i<n; i++) {
            if (v[i] % first != 0) {
                flag = true;
            }
        }

        if (flag) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}