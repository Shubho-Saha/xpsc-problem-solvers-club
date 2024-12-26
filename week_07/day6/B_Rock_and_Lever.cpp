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
    vector<int> samePosBit(31, 0);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int pos = __lg(x);
        samePosBit[pos]++;
    }

    ll paircnt = 0;
    for(auto x : samePosBit)
    {
        ll m = x-1;
        ll pairs = (m*(m+1))/2;
        paircnt += pairs;
    }
    cout<<paircnt<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}