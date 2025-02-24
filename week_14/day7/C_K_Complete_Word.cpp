#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    string str = " ";
    str += s;
    
    int half = k/2;
    int opcnt = 0;
    for(int i=1; i<=half; i++) {
        map<char, int> mp; int cnt = 1;
        for(int j=i; j<=n; j += k) {
            auto one = str[j];
            auto two = str[cnt*k-i+1];
            mp[one]++; mp[two]++;
            cnt++;
        }
        int total = 0, mx = 0;
        for(auto [key, val] : mp) {
            total += val;
            mx = max(mx, val);
        }
        opcnt += (total - mx);
    }

    if (k&1) {
        int idx = (k+1)/2;
        map<char, int> mp;
        for(int i=idx; i<=n; i += k) {
            auto c = str[i];
            mp[c]++;
        }
        int total = 0, mx = 0;
        for(auto [key, val] : mp) {
            total += val;
            mx = max(mx, val);
        }
        opcnt += (total - mx);
    }

    cout<<opcnt<<nl;

    
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