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

    vector<int> vec;
    ll total = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        total += x;
        vec.push_back(x);
    }

    string s;
    cin>>s;

    ll result = 0;
    ll l=0, r=n-1;

    while(l <= r)
    {
        if(s[l] == 'L' && s[r] == 'R') {
            result += total;
            total -= vec[l]; l++;
            total -= vec[r]; r--;
        } else if (s[l] == 'L' && s[r] == 'L') {
            total -= vec[r]; r--;
        } else if (s[l] == 'R' && s[r] == 'L') {
            total -= vec[l]; l++;
            total -= vec[r]; r--;
        } else {
            total -= vec[l]; l++;
        }
    }

    cout<<result<<nl;
    
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