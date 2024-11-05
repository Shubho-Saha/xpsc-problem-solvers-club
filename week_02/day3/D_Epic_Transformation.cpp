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
    map<int, int> mp;
    for(int i=0; i<n; i++) 
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }

    if (mp.size() == 1) {
        cout<<n<<nl;
        return;
    }

    int mxCount = INT_MIN;
    
    for(auto [key, val] : mp) {
        mxCount = max(mxCount, val);
    }
    int rest = n - mxCount;

    if (n%2 == 0)
    {
        if (rest >= mxCount) {
            cout<<0<<nl;
        } else {
            cout<<mxCount-rest<<nl;
        }
    } else {
        if (rest >= mxCount) {
            cout<<1<<nl;
        } else {
            cout<<mxCount-rest<<nl;
        }
    }


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