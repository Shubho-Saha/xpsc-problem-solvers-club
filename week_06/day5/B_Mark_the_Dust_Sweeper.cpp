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
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }
    int firstPositive = -1;
    ll sum = 0;
    for(int i=0; i<n-1; i++) {
        if (vec[i] > 0 && firstPositive == -1) {
            firstPositive = 1;
        }
        if (firstPositive != -1) {
            if (vec[i] > 0) {
                sum += vec[i];
            } else {
                sum++;
            }
        }
    }

    cout<<sum<<nl;
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