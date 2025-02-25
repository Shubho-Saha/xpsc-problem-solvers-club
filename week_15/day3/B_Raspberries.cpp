#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);

    int product = 1;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        product *= v[i];
    }

    if (k % 2 == 0) {
        if (k == 2) {
            if (product % 2 == 0) {
                cout<<0<<nl;
            } else {
                cout<<1<<nl;
            }
        } else {
            int two = 0, four = 0;
            for(int i=0; i<n; i++) {
                int val = v[i];
                if (val % 2 == 0) two++;
                if (val % 4 == 0) four++;
            }
            if (four > 0 || two > 1) {
                cout<<0<<nl;
            } else if (two > 0) {
                cout<<1<<nl;
            } else {
                
                int mn = k;
                for(int i=0; i<n; i++) {
                    int val = v[i] % k;
                    mn = min(mn, k-val);
                }

                cout<<min(mn, 2)<<nl;
            }
        }
    } else {
        int mn = k;
        bool flag = false;
        for(int i=0; i<n; i++) {
            int val = v[i] % k;
            if (val == 0) flag = true;
            mn = min(mn, k-val);
        }
        if (flag) {
            cout<<0<<nl;
        } else {
            cout<<mn<<nl;
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