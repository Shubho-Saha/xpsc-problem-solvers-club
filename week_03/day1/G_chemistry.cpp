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
    if (n == k+1) {
        cout<<"YES"<<nl;
        return;
    }
    map<char, int> mp;
    map<char, int> odd;
    map<char, int> even;

    for(char c : s)
    {
        mp[c]++;
    }

    for(auto [key, val] : mp)
    {
        if (val % 2 == 0) {
            even[key] = val;
        } else {
            odd[key] = val;
        }
    }

    if (k == odd.size()) {
        cout<<"YES"<<nl;
    } else if (k < odd.size()) {
        if (odd.size() - k == 1) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
    } else {
        cout<<"YES"<<nl;
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