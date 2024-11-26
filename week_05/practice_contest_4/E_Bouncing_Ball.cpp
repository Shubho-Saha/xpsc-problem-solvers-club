#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> vec(n);
    vector<ll> preSum(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        if (i==0) {
            preSum[0] = vec[0];
        } else {
            preSum[i] = preSum[i-1] + vec[i];
        }
    }

    ll count = 0;

    for(int i=0; i<n; i++) {
        if (vec[i] == 0) {
            int leftCnt, rightCnt;
            if (i==0) {
                leftCnt = 0;
            } else {
                leftCnt = preSum[i];
            }

            if (i==n-1) {
                rightCnt = 0;
            } else {
                rightCnt = preSum[n-1] - preSum[i];
            }

            if (abs(leftCnt - rightCnt) == 1) {
                count++;
            } else if (leftCnt == rightCnt) {
                count += 2;
            }
        }
    }

    cout<<count<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}