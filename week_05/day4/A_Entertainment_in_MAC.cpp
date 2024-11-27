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

    bool flag = false;
    int l = 0, r = s.size()-1;
    while (l < r)
    {
        if (s[l] < s[r]) break;
        if (s[r] < s[l]) {
            flag = true;
            break;
        }
        l++; r--;
    }


    if (flag) {
        for(int i=s.size()-1; i>=0; i--) {
            cout<<s[i];
        }
        for(int i=0; i<s.size(); i++) {
            cout<<s[i];
        }
        cout<<nl;
    } else {
        cout<<s<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    t = 1; 
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}