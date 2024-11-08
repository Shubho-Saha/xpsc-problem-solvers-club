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

    multiset<int> st;
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if (x == 0 && st.size() != 0)
        {
            auto it = --st.end();
            int largestVal = *it;
            ans += largestVal;
            st.erase(it);
        }
        if (x != 0) {
            st.insert(x);
        }

    }
    cout<<ans<<nl;
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