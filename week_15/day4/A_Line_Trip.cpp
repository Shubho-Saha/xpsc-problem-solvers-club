#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;

        int mxAns = 0;
        vector<int> v(n);
        for(auto &it : v) cin>>it;
        for(int i=0; i<n; i++) {
            if (i==0) {
                mxAns = max(mxAns, abs(v[i]-0));
            }
            if (i > 0) {
                mxAns = max(mxAns, v[i]-v[i-1]);
            }
            if (i == n-1) {
                mxAns = max(mxAns, 2*(x-v[i]));
            }
        }

        cout<<mxAns<<nl;
    }

    return 0;
}