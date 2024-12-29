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
    vector<int> bitCnt(30, 0);
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        for(int k=0; k<=29; k++)
        {
            if ((x>>k)&1) {
                bitCnt[k]++;
            }
        }
    }

    int gcd = 0;
    for(auto num : bitCnt) {
        gcd = __gcd(gcd, num);
    }
    vector<int> res;
    for(int i=1; i<= sqrt(gcd); i++)
    {
        if (gcd % i == 0) {
            res.push_back(i);
            if (i != (gcd/i)) {
                res.push_back((gcd/i));
            }
        }
    }
    
    if (gcd == 0) {
        for(int i=1; i<=n; i++) {
            cout<<i<<" ";
        }
        cout<<nl;
        return;
    }
    sort(all(res));
    for(auto val : res) {
        if (val <= n) {
            cout<<val<<" ";
        }
    }
    cout<<nl;
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