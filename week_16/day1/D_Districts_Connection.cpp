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
    bool flag = false;
    int gang, center;
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
        if (i==0) {
            gang = v[i];
            center = gang;
        } else {
            if (gang != v[i]) {
                flag = true;
            }
        }
    }

    if (!flag) {
        cout<<"NO"<<nl;
    } else {
        cout<<"YES"<<nl;
        int other;
        for(int i=1; i<n; i++) {
            if (v[i] != center) {
                cout<<1<<" "<<i+1<<nl;
                other = i+1;
            }
        }
        for(int i=1; i<n; i++) {
            if (v[i] == center) {
                cout<<other<<" "<<i+1<<nl;
            }
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}