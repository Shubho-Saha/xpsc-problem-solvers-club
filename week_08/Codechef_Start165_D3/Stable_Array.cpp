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
    
    int mxVal = vec[n-1];
    int mxsec = 0, count = 0;
    for(int i= n-2; i>= 0; i--) {
        if (vec[i] < mxVal) {
            count++;
            mxsec = max(mxsec, count);
        } else if (vec[i] >= mxVal) {
            mxVal = vec[i];
            count = 0;
        }
    }
    cout<<mxsec<<nl;

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