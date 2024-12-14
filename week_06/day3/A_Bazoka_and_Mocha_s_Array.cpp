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
    int cnt = 0;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    if (is_sorted(all(vec))) {
        cout<<"Yes"<<nl;
    } else {
        int idx = -1;
        for(int i=0; i<n-1; i++) {
            if (vec[i] > vec[i+1]) {
                idx = i+1;
                break;
            }
        }
        if (is_sorted(vec.begin()+idx, vec.end())) {
            if (vec[n-1] <= vec[0]) {
                cout<<"Yes"<<nl;
            } else {
                cout<<"No"<<nl;
            }
        } else {
            cout<<"No"<<nl;
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