#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n; 
    cin>>n;
    vector<int> v(n);
    ll one = 0, sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i]==1) {
            one++;
        }
        sum += v[i];
    }

    if (n==1) {
        cout<<"NO"<<nl;
        return;
    }

    ll need = sum - (one*2);
    ll spaceLeft = n - one;

    if (spaceLeft > need) {
        cout<<"NO"<<nl;
    } else {
        cout<<"YES"<<nl;
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