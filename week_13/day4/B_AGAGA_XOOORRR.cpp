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
    int finalXor = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        finalXor ^= v[i];
    }

    if (finalXor == 0) {
        cout<<"YES"<<nl;
    } else {
        int cnt = 0;
        int crntXor = 0;
        for(int i=0; i<n; i++) {
            crntXor ^= v[i];
            if (crntXor == finalXor) {
                cnt++;
                crntXor = 0;
            }
        }
        if (cnt > 1) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
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