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
    string s;
    cin>>s;

    int match=0, nomatch=0, l=0, r=n-1;

    while(l<r)
    {
        if (s[l] == s[r]) {
            match++;
        } else {
            nomatch++;
        }
        l++; r--;
    }

    vector<int> vec;
    for(int i=0; i<=n; i++)
    {
        if (i < nomatch) {
            vec.push_back(0);
            continue;
        } else if ( i == nomatch) {
            vec.push_back(1);
            continue;
        }
        int rem = i - nomatch;
        if ((rem&1) && (n&1)) rem--;
        if ((rem%2 == 0) && (rem/2) <= match) {
            vec.push_back(1);
        } else {
            vec.push_back(0);
        }
        
    }
    for(auto x : vec) {
        cout<<x;
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